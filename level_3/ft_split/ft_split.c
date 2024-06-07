/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:45:17 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/10 20:01:22 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	cuantosEspacios(char *str)
{
	int numEspacios;
	int	i;

	i = 0;
	numEspacios = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			numEspacios++;
		i++;
	}
	printf("El numEspacios dentro de la funcion de numEspacios es %d\n", numEspacios);
	return (numEspacios + 1);
}

char    **ft_split(char *str)
{
	int	cont;
	int j;
	int	i;
	int	numEspacios;
	char	**final;
	int	k;
	int l;

	cont = 0;
	i = 0;
	final = NULL;
	j = 0;
	l = 0;
	k = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	printf("Me quedo en el caracter [%c]\n", str[i]);
	numEspacios = cuantosEspacios(str);
	printf("Cuantos espacios voy a reservar ==> %d\n", numEspacios);
	//Reservar para el numero de filas
	final = (char **)malloc((numEspacios + 1) * sizeof(char *));
	while (j < numEspacios)
	{
		printf("La j es %d\n", j);
		while (str[i] != ' ' || (str[i] >= 9 && str[i] <= 13))
		{
			while (str[i+1] != ' ' || (str[i+1] >= 9 && str[i+1] <= 13))
				i++;
		    cont++;
	  	}
 		printf("xgdfjnvjk\n");		
		final[j] = (char *)malloc((cont + 1) * sizeof(char));
		j++;
		cont = 0;
	}

	printf("He reservado memoria para el doble puntero\n");

	//Meter los valores dentro de la cadena
	while (k < numEspacios)
	{
		while (str[j] != '\0')
		{
			while (str[j] == ' ' || (str[j] >= 9 && str[j] <= 13))
				j++;
			final[k][l] = str[j];
			j++;
		}
		final[j][l] = '\0';
		k++;
		l = 0;
	}
	final[k] = NULL;
	return (final);
}

int main(void)
{
	int	i;
	char **final;
	//char cadena[] = "  hola  que   tal estas";
	char cadena[] = "hola que tal estas";

	i = 0;
	printf("Hola, voy a llamar al split\n");
	final = ft_split(cadena);
	while (final[i] !=  NULL)
	{
		printf("La cadena es %s\n", final[i]);
		i++;
	}
	return (0);
}
