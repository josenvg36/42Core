/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:09:21 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/16 13:24:10 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, int len)
{
	int	i = 0;

	while (i < len && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int	i = 0, word_count = 0, j = 0, k = 0;
	char	**array;

	while (str[i])
	{
		while (str[i] && (str[i] == 32 || str[i] == 9 || str[i] == 10))
			i++;
		if (str[i])
			word_count++;
		while (str[i] && (str[i] != 32 || str[i] != 9 || str[i] != 10))
			i++;
	}
	array = (char **)malloc(sizeof(char **) * (word_count + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == 32 || str[i] == 9 || str[i] == 10))
			i++;
		j = i;
		while (str[i] && (str[i] != 32 || str[i] != 9 || str[i] != 10))
			i++;
		if (j < i)
		{
			array[k] = (char *)malloc(sizeof(char *) * ((i - j) + 1));
			ft_strncpy (array[k++], &str[i], i - j);
		}
	}
	array[k] = '\0';
	return (array);
}