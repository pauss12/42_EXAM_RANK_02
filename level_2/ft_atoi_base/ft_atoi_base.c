#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	show_base(int str_base, char c)
{
	int i;
	int j;
	int extra;
	int k;
	char base[str_base + 1];

	i = 0;
	j = 0;
	k = 0;
	extra = 0;
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	if (str_base <= 10)
	{
		while (i < str_base)
		{
			base[i] = i + '0';
			i++;
		}
	}
	else
	{
		extra = str_base - 10;
		while (i < 10)
		{
			base[i] = i + '0';
			i++;
		}
		while (j < extra)
		{
			base[i] = 'a' + j;
			j++;
			i++;
		}
	}
	base[i] = '\0';
	while (base[k] != '\0')
	{
		if (base[k] == c)
		{
			return (k);
		}
		k++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int result;
	int value;
	int sig;

	i = 0;
	result = 0;
	sig = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		value = show_base(str_base, str[i]);
		if (value != (-1))
		{
			result = (result * str_base) + value ;
		}
		else
			return (result * sig);
		i++;
	}
	return (result * sig);
}

