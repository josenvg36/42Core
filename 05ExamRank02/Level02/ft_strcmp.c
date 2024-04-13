/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 00:50:55 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/14 01:02:08 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	int	i = 1;
	
	if (argc > 1)
	{
		while (argv[i])
		{
			printf("ft_strcmp[%i] = %i\n", i, ft_strcmp(argv[i], argv[i + 1]));
			printf("strcmp[%i] = %i\n", i, strcmp(argv[i], argv[i + 1]));
			i = i + 2;
		}
	}
}
*/