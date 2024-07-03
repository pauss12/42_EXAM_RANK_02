#include <unistd.h>
#include <stdio.h>

int	count(char c)
{
	int count;
	char aux;

	count = 0;
	aux = c;
	if (aux >= 'A' && aux <= 'Z')
		aux += 32;
	while (aux <= 'z')
	{
		count++;
		aux++;
	}
	return (count);
}

void	trace(char *str)
{
	int i;
	char c;
	int difference;
	int num_until_z;

	i = 0;
	difference = 0;
	num_until_z = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			num_until_z = count(str[i]);
			if (num_until_z > 13)
			{
				c = str[i] + 13;
				write(1, &c, 1);
			}else
			{
				difference = 13 - num_until_z;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = 'a';
				else
					str[i] = 'A';
				c = str[i] + difference;
				write(1, &c, 1);
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		trace(argv[1]);
	write(1, "\n", 1);
	return (0);
}
