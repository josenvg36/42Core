/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:20:47 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/13 15:27:31 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
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
			if ((65 <= argv[1][i] && argv[1][i] <= 90) || (97 <= argv[1][i] && argv[1][i] <= 122))
			{
				j = argv[1][i] + 1;
				write (1, &j, 1);
			}
			else if (argv[1][i] == 90 || argv[1][i] == 122)
			{
				j = argv[1][i] - 24;
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