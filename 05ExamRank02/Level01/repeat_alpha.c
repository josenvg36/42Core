/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:45:17 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/13 14:59:20 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;
	
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (65 <= argv[1][i] && argv[1][i] <= 90)
			{
				j = argv[1][i] - 64;
				while (j > 0)
				{
					write (1, &argv[1][i], 1);
					j--;
				}
			}
			else if (97 <= argv[1][i] && argv[1][i] <= 122)
			{
				j = argv[1][i] - 96;
				while (j > 0)
				{
					write (1, &argv[1][i], 1);
					j--;
				}
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
