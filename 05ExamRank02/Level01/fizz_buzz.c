/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:17:35 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/13 14:34:36 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/

#include <unistd.h>

void	ft_putnbr(int i)
{
	if (i > 9)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	i = i + 48;
	write (1, &i, 1);
}


int	main(void)
{
	unsigned int	i = 1;
	
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else
			ft_putnbr (i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}