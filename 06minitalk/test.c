/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnajul <jnajul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:27:16 by jnajul            #+#    #+#             */
/*   Updated: 2024/04/23 11:34:02 by jnajul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void	handler(int num)
{
	write(STDOUT_FILENO, "I won't die!\n", 13);
}

int	main(void)
{
	signal(SIGINT, handler);
	
	while (1)
	{
		printf("Infinite cycle: %d\n", getpid());
		sleep(1);
	}
}