/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 01:18:07 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/14 01:28:42 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*des;
	int		i = 0;

	while (src[i])
		i++;
	des = (char *)malloc(sizeof(char *) * (i + 1));
	if (des == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("strdup = %s\n", strdup(argv[1]));
		printf("ft_strdup = %s\n", ft_strdup(argv[1]));
	}
	else
		printf("\n");
	return (0);
}