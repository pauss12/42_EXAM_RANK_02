#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	cuantos_digitos(int nbr)
{
	int i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int len;
	int number;
	char *str;

	len = 0;
	if (nbr < 0)
	{
		number = nbr * (-1);
		len = cuantos_digitos(number);
	}
	else
		len = cuantos_digitos(nbr);
	if (nbr < 0)
		len = len + 1;
	str = malloc((len) * sizeof(char));
	if (str == NULL)
		return (NULL);

	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (nbr < 0)
	{
		str[len] = '\0';
		while (number > 0)
		{
			str[len - 1] = (number % 10) + '0';
			number /= 10;
			len--;
		}
		str[len - 1] = '-';
	}
	else
	{
		str[len] = '\0';
		
		while (nbr > 0)
		{
			len--;
			str[len] = (nbr % 10) + '0';
			nbr /= 10;
		}
	}
	return (str);
}

int main(int argc, char *argv[])
{
	int n;
	char *str;

	n = 0;
	str = NULL;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		str = ft_itoa(n);
		printf("STR es %s\n", str);
	}
	return (0);
}