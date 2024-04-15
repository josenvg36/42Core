/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:34:21 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/15 21:44:43 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
     ||
     \/
 0110  0100
*/

unsigned char	reverse_bits(unsigned char octet)
{
	int				i = 8;
	unsigned char	res;

	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	unsigned char	bit = 0;
	unsigned char	res = reverse_bits((unsigned char)4);
	int				i = 8;

	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
	return (0);
}
*/