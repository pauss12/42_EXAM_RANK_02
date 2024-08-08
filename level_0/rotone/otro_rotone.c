#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *str;
	int i;
	char c;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i] == 'z')
					c = 'a';
				else
					c = str[i] + 1;
				write(1, &c, 1);
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] == 'Z')
					c = 'A';
				else
					c = str[i] + 1;
				write(1, &c, 1);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
