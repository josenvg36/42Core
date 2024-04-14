/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 11:14:54 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/14 11:23:36 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/

#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;

	while (s[i] && accept[i])
	{
		if (s[i] != accept[i])
			return (i);
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("strcspn = %lu\n", strspn(argv[1], argv[2]));
		printf("ft_strcspn = %lu\n", ft_strspn(argv[1], argv[2]));
	}
	else
		printf("\n");
	return (0);
}