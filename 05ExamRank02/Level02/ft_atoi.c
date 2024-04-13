/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:48:42 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/14 00:49:31 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

int	ft_atoi(const char *str)
{
	int	i = 0, j = 0, sign = 1;

	if (str[i])
	{
		while (str[i] == 32 || str[i] == 9)
			i++;
		if (str[i] == 43 || str[i] == 45)
		{
			if (str[i] == 45)
				sign *= -1;
			i++;
		}
		while (48 <= str[i] && str[i] <= 57)
		{
			j = (j * 10) + (str[i] - 48);
			i++;
		}
	}
	return ((int)sign * (int)j);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	 i = 1;

	if (argc > 1)
	{
		while (argv[i])
		{
			printf("ft_atoi[%i] = %i\n", i, ft_atoi(argv[i]));
			printf("atoi[%i] = %i\n", i, atoi(argv[i]));
			i++;
		}
	}
	return (0);
}
*/