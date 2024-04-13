/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:43:24 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/13 14:44:50 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
*/

void	ft_swap(int *a, int *b)
{
	int	tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
