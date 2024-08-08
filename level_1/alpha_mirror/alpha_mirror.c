#include <unistd.h>
#include <stdio.h>

void write_its_mirror(char c)
{
	int i;
	char abecedario[] = "abcdefghijklmnopqrstuvwxyz";
	char aux;
	char letra;
	char temp;

	i = 1;
	aux = 'z';
	if (c >= 'A' && c <= 'Z')
		temp = c + 32;
	else
		temp = c;
	while (aux > 'a')
	{
		if (aux == temp)
			break ;
		aux--;
		i++;
	}
	i--;
	if (c >= 'a' && c <= 'z')
		write(1, &abecedario[i], 1);
	else
	{
		letra = abecedario[i] - 32;
		write(1, &letra, 1);
	}
}

int main(int argc, char *argv[])
{
	char *str;
	int i;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				write_its_mirror(str[i]);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
