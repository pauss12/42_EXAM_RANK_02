#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	transforme_to_character(int num)
{
	char c;

	c = 0;
	if (num > 9)
	{
		transforme_to_character(num / 10);
		transforme_to_character(num % 10);
	}
	else
	{
		c = (num + '0');
		write(1, &c, 1);
	}
	return (c);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


void	mult(int num, char *char_num)
{
	int i;
	char c;

	i = 0;
	while (i < 9)
	{
		c = (i + 1) + '0';
		write(1, &c, 1);
		write(1, " x ", 3);
		write(1, char_num, ft_strlen(char_num));
		write(1, " = ", 3);
		transforme_to_character((i+1) * num);
		if (i < 8)
			write(1, "\n", 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int i;
	int sig;
	int num;

	i = 0;
	sig = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num*sig);
}

int main(int argc, char *argv[])
{
	int num;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num < 0)
			return (0);	
		mult(num, argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
