/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:33:53 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/10 16:12:05 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	posicion(char *abecedario, char c)
{
	int i;

	i = 0;
	while (abecedario[i] != '\0')
	{
		if (abecedario[i] == c)
			return (i);
		i++;
	}
	return (0);
}

void	trace_line(char *str, char *abecedario)
{
	int i;
	int j;
	int cuantasRepeticiones;

	i = 0;
	cuantasRepeticiones = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cuantasRepeticiones = posicion(abecedario, str[i]+32);
		}
		else
			cuantasRepeticiones = posicion(abecedario, str[i]);
		while (j <= cuantasRepeticiones)
		{
			write(1, &str[i], 1);
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	char	*str;
	char	abecedario[27];
	char	c;
	int		i;

	str = NULL;
	c = 'a';
	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (c <= 'z')
		{
			abecedario[i] = c;
			c++;
			i++;
		}
		trace_line(str, abecedario);
	}
	write(1, "\n", 1);
	return (0);
}
