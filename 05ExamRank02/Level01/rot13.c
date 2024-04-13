/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:08:48 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/13 15:25:22 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if ((65 <= argv[1][i] && argv[1][i] <= 77) || (97 <= argv[1][i] && argv[1][i] <= 109))
			{
				j = argv[1][i] + 13;
				write (1, &j, 1);
			}
			else if ((78 <= argv[1][i] && argv[1][i] <= 90) || (110 <= argv[1][i] && argv[1][i] <= 122))
			{
				j = argv[1][i] - 13;
				write (1, &j, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}