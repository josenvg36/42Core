/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:59:19 by jnajul            #+#    #+#             */
/*   Updated: 2024/05/06 13:50:22 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	long	nbr;
	int		len;
	int		i;

	len = 0;
	while (str && str[len])
		len++;
	i = 0;
	nbr = 0;
	while (i < len)
	{
		nbr = (nbr * 10) + str[i] - 48;
		i++;
	}
	return (nbr);
}

void	send_bits(int pid, char c)
{
	int		i;
	int		bit;
	char	cc;

	i = 7;
	cc = c;
	while (i >= 0)
	{
		bit = (c >> i) & 1;
		if (bit)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i--;
		usleep(200);
	}
	if (cc)
		usleep(300);
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
		write(1, "Enter PID _ Text\n", 17);
	else
	{
		pid = ft_atoi(argv[1]);
		while (argv[2] && *argv[2])
			send_bits(pid, *argv[2]++);
		send_bits(pid, '\n');
	}
	return (0);
}