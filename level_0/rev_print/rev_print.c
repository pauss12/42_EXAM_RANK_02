#include <unistd.h>
#include <stdio.h>

void	trace(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i != 0)
	{
		i--;
		write(1, &str[i], 1);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		trace(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
