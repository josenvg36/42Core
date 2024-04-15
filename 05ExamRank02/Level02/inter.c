/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:31:43 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/15 22:09:34 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0, j = 0, k = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j] != argv[1][i])
				j++;
			if (argv[2][j] == argv[1][i])
			{
				k = 0;
				while (argv[1][k] != argv[2][j])
					k++;
				if (k == i)
					write (1, &argv[1][i], 1);
				j++;
			}
			else if (!argv[2][j])
				break ;
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}