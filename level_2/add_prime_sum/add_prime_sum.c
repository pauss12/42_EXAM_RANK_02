#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = (num * 10) + (str[i] - '0'); 
		i++;
	}
	return (num);
}

int is_prime(int num)
{
	int i;

	i = 2;
	while (i <  num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int num)
{
	int sol;
	int i;

	sol = 0;
	i = 2;
	while (i <= num)
	{
		if (is_prime(i) == 1)
			sol += i;
		i++;
	}
	return (sol);
}

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n/10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		ft_putnbr(add_prime_sum(num));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
