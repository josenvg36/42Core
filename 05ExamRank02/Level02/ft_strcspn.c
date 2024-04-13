/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 01:02:48 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/14 01:17:15 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("strcspn = %lu\n", strcspn(argv[1], argv[2]));
		printf("ft_strcspn = %lu\n", ft_strcspn(argv[1], argv[2]));
	}
	else
		printf("\n");
	return (0);
}
*/
