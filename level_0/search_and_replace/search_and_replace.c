/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:12:39 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/14 17:42:38 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	trace(char *str, char c1, char c2)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c1)
			str[i] = c2;
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if ((ft_strlen(argv[2]) == 1) && (ft_strlen(argv[3]) == 1))
			trace(argv[1], argv[2][0], argv[3][0]);
		else
		{
			write(1, "\n", 1);
			exit(-1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
