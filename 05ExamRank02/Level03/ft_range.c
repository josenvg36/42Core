/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:29:05 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/16 11:54:09 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range = NULL;
	int	len = 0, i = 0;

	if (end < start)
		len = start - end;
	else if (start < end)
		len = end - start;
	else
		len = 1;
	range = (int *)malloc(sizeof(int) * (len + 1));
	if (!range)
		return (NULL);
	while (start != end)
	{
		range[i] = start;
		if (start < end)
			start++;
		else if (end > start)
			start--;
		i++; 
	}
	range[i] = end;
	return ((int *)range);
}