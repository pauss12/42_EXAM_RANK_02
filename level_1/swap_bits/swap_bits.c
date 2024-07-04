/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:13:48 by pmendez-          #+#    #+#             */
/*   Updated: 2024/07/04 14:25:13 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_binary(unsigned char octet)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (octet >> i) & 1);
    }
    printf("\n");
}

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int main()
{
	unsigned char octet;

   	octet = 0b01000001;

   	printf("Original: ");
   	print_binary(octet);

	unsigned char swapped = swap_bits(octet);

	printf("Swapped: ");
	print_binary(swapped);
	printf("Intercambiado Decimal: %d\n", swapped);

	return 0;
}
