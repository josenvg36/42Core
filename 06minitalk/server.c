/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:57:09 by jnajul            #+#    #+#             */
/*   Updated: 2024/05/06 13:43:18 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


void	ft_putnbr(long nbr)
{
	char	tmp;

	if (nbr / 10 > 0)
		ft_putnbr (nbr / 10);
	tmp = nbr % 10 + '0';
	write(1, &tmp, 1);
}

void	signal_handler(int signal)
{
	static int	i;
	static char	n;
	int			nbr;

	if (signal == SIGUSR1)
		nbr = 0;
	else
		nbr = 1;
	n = (n << 1) + nbr;
	i++;
	if (i == 8)
	{
		write (1, &n, 1);
		i = 0;
		n = 0;
	}
	usleep(50);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_handler = &signal_handler;
	sa.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	write (1, "SERVER PID = ", 14);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1)
	{
		usleep(1);
	}
	return (0);
}