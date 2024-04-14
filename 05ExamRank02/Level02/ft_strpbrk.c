/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:00:49 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/14 10:19:01 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
*/

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0, j = 0;
	
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				s1 = s1 + i;
				return ((char *)s1);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("strpbrk = %p\n", strpbrk(argv[1], argv[2]));
		printf("ft_strpbrk = %p\n", ft_strpbrk(argv[1], argv[2]));
	}
	else
		printf("\n");
	return (0);
}
*/