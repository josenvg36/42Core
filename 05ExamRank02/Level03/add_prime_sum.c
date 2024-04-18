/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:59:43 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/18 21:59:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>

int	ft_atoi(char *nbr)
{
	int	i = 0, sign = 1, j = 0;
	
	while (nbr[i] <= 32)
		i++;
	if (nbr[i] == 43 || nbr[i] == 45)
	{
		if (nbr[i] == 45)
			sign *= -1;
		i++;
	}
	while (48 <= nbr[i] && nbr[i] <= 57)
	{
		j = (j * 10) + (nbr[i] - 48);
		i++;
	}
	return (sign * j);
	
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr (nbr / 10);
		ft_putnbr (nbr % 10);
	}
	else
	{
		nbr = nbr + 48;
		write (1, &nbr, 1);
	}
}

int	main(int argc, char **argv)
{
	int	nbr = 0, i = 2, j = 0;
	
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr >= 0)
		{
			while (i <= nbr)
			{
				if (i == 2 || i == 3 || i == 5)
					j += i;
				else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
					j += i;
				i++;
			}
		}
	}
	ft_putnbr(j);
	write (1, "\n", 1);
	return (0);
}