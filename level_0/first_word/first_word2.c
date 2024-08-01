#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *str;
	int i;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] != '\0')
		{
			if (str[i] == ' ')
				break ;
			write(1, &str[i], 1);
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
