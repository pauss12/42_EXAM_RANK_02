#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int num;
	int i;
	int sig;

	i = 0;
	num = 0;
	sig = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num*sig);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("ft_atoi(\"%s\") = %d\n", argv[1], ft_atoi(argv[1]));
	return (0);
}