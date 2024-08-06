#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int total;
	int j;
	int i;
	int aux;
	int *tab;

	tab = 0;
	j = 0;
	i = 0;
	total = 0;
	aux = 0;
	if (start == 0 && end == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}

	if (start < end)
	{
		j = start;
		while (j <= end)
		{
			j++;
			total++;
		}
	}
	else
	{
		j = end;
		while (j <= start)
		{
			j++;
			total++;
		}
	}
	tab = malloc(total * sizeof(int));
	if (tab == NULL)
		return (NULL);

	if (start < end)
	{
		aux = start;
		while (aux <= end)
		{
			tab[i] = aux;
			aux++;
			i++;
		}
	}
	else
	{
		aux = start;
		while (aux >= end)
		{
			tab[i] = aux;
			aux--;
			i++;
		}
	}
	return (tab);
}
