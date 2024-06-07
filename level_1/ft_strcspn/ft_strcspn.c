/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:48:28 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/14 18:24:36 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;
	int num;

	i = 0;
	j = 0;
	num = 0;
	while (s[i] != '\0' && reject[j] != '\0')
	{
		if (s[i] == reject[j])
			break ;
		i++;
		num++;
	}
	return (num);
}
