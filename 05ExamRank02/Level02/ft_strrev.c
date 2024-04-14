/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:19:21 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/14 11:11:40 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

*/

char	*ft_strrev(char *str)
{
	int		i = 0, j = 0;
	char	tmp;
	
	while (str[i])
		i++;
	while (j < i / 2)
	{
		tmp = str[j];
		str[j] = str[i - 1 - j];
		str[i - 1 - j] = tmp;
		j++;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{	
	if (argc > 1)
	{
		printf("Original string = %s\n", argv[1]);
		ft_strrev(argv[1]);
		printf("Reversed string = %s\n", argv[1]);
	}
	else
		printf("\n");
	return (0);
}
