/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:28:01 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/14 21:29:49 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_how_many_numbers(int nbr)
{
	int numCaracteres;

	numCaracteres = 0;
	while (nbr > 0)
	{
		numCaracteres++;
		nbr = nbr / 10;
	}
	return (numCaracteres);
}

void trace(int nbr)
{
	char caracter;
	int i;

	i = 0;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
			write(1, "-2147483648", 11);
		nbr = nbr * (-1);
		write(1, "-", 1);		
	}
	if (nbr >= 0 && nbr <= 9)
	{
		caracter = nbr + '0';
		write(1, &caracter, 1);
	}else 
	{
		trace(nbr / 10);
		trace(nbr % 10);
	}
}

char	*ft_itoa(int nbr)
{
	char *cadena;
	int	numCaracteres;
	int i;

	cadena = NULL;
	i = 0;
	numCaracteres = ft_how_many_numbers(nbr);
	cadena = (char *)malloc((numCaracteres +  1) * sizeof(char));
	if (cadena == NULL)
		return (NULL);
	trace(nbr);
	return (cadena);
}
