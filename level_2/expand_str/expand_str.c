/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:46:12 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/10 18:44:04 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	trace(char *str)
{
	int i;
	int flag;
	int	j;

	i = 0;
	j = 0;
	flag = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && (flag == 0))
			flag = 1;
		if (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		{
			if (flag == 1)
				write(1, "   ", 3);
			flag = 0;
			write(1, &str[i],1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	char	*str;

	str = NULL;
	if (argc == 2)
	{
		str = argv[1];
		trace(str);
	}
	write(1, "\n", 1);
	return (0);
}
