/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:45:35 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/09 22:09:17 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc == 2)
	{
		while (i < argc)
		{
			while (argv[i][j] == ' ')
				j++;
			while(argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				if (argv[i][j+1] == ' ')
				{
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
