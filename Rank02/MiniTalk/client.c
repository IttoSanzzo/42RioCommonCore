/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/28 12:54:11 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/28 12:54:14 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_error(void)
{
	ft_printf("\n%sError transmiting! Tip: Check PID.%s\n", RED, WTH);
	ft_printf("\n%sError : Check PID.%s\n", RED, WTH);
	ft_printf("\n%sError : Check PID.%s\n", RED, WTH);
	exit(1);
}

void	char_to_signals(char c, int pid)
{
	int	bit;

	bit = 0;
	if (c >= 0)
	{
		while (bit < 8)
		{
			if (c & 128)
			{
				if (kill(pid, SIGUSR1) == -1)
					signal_error();
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					signal_error();
			}
			c <<= 1;
			bit++;
			pause();
			usleep(50);
		}
	}
}

void	sent_text(char *str, int pid)
{
	while (*str)
		char_to_signals(*str++, pid);
	char_to_signals('\0', pid);
}

void	signal_rx(int sig)
{
	if (sig == SIGUSR1)
		exit(0);
}

int	main(int ac, char **av)
{
	int	server_pid;

	if (ac == 3)
	{
		signal(SIGUSR1, signal_rx);
		signal(SIGUSR2, signal_rx);
		server_pid = ft_atoi(av[1]);
		sent_text(av[2], server_pid);
	}
	else
		ft_printf("%sArguments? -> ./client server_pid \"text to send\"%s\n",
			RED, WTH);
	return (1);
}
