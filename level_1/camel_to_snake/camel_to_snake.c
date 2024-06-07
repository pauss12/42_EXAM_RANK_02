/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:10:17 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/09 23:00:10 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	char *str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				write(1, &str[i], 1);
			}
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				write(1, "_", 1);
				str[i] += 32;
				write(1, &str[i], 1);
			}	
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
