#include <unistd.h>
#include <stdio.h>

void	write_word(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i+1] == ' ' || str[i+1] == '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				c = str[i] - 32;
				write(1, &c, 1);
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				write(1, &str[i], 1);
			else
				write(1, &str[i], 1);
		}
		else
		{
                        if (str[i] >= 'A' && str[i] <= 'Z')
                        {
                                c = str[i] + 32;
                                write(1, &c, 1);
                        }
                        else
                                write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc != 1)
	{
		while (argv[i] != NULL)
		{
			write_word(argv[i]);
			if (argv[i+1] != NULL)
				write(1, "\n", 1);
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
