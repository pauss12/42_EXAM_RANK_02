/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 23:05:47 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/10 00:09:26 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *s1;
	char *s2;
	int	 i;
	int  j;
	int	 numero;
	char caract;

	i = 0;
	j = 0;
	numero = 0;
	s1 = argv[1];
	s2 = argv[2];
	if (argc == 3)
	{
		while (s1[i] != '\0')
		{
			while (s2[j] != '\0')
			{
				if (s1[i] == s2[j] && s1[i+1] != s2[j])
				{
					numero = 1;
				}
				j++;
			}
			i++;
		}
	}
	printf("%d", numero);
	write(1, "\n", 1);
	return (0);
}
