/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 00:10:19 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/16 00:20:33 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

int	max(int* tab, unsigned int len)
{
	unsigned int	i = 0;
	int				max = 0;
	
	while (i < len - 1)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

/*
#include <stdio.h>

int	main(void)
{
	int	i[] = {1, 2, 3, 6, 9, 1, 8, 5, 6, 3};

	printf ("%i\n", max(i, 10));
	return (0);	
}
*/
