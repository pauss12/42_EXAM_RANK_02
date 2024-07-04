/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:10:04 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/10 01:31:30 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	cuantosEspacios(char *str)
{
	int numEspacios;
	int i;

	numEspacios = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			numEspacios++;
		i++;
	}
	return (numEspacios + 1);
}

char **ft_split(char *str)
{
	int numEspacios;
	int i;
	char	**final;
	int		cont;
	int 	j;
	int		k;
	int 	l;

	i = 0;
	k = 0;
	j = 0;
	cont = 0;
	l = 0;
	numEspacios = cuantosEspacios(str);

	//Reservar --------------------
	final = (char **)malloc((numEspacios) * sizeof(char *));
	if (final == NULL)
		return (NULL);
	while (i < numEspacios)
	{
		while (str[cont] != ' ' && str[cont] != '\0')
		{
			cont++;
			k++;
		}
		final[i] = (char *)malloc((k + 1) * sizeof(char));
		i++;
		cont++;
		k = 0;
	}

	//Meter valores en el doble puntero --------
	while (k < numEspacios)
	{
		while (str[j] != '\0')
		{
			if (str[j] != ' ')
			{
				final[k][j] = str[j];
			}
			if (str[j] == ' ')
				j++;
			j++;
			
		}
		k++;
	}

	//Imprimir -------------
	while (final[l] != NULL)
	{
		printf("%s\n", final[l]);
		l++;
	}
	return (final);
}


int main(int argc, char *argv[])
{
	int	i;
	char	*str;
	char	**final;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		final = ft_split(str);
		while (final[i] != NULL)
		{
			printf("%s\n", final[i]);
			i++;
		}
	}
	return (0);
}
