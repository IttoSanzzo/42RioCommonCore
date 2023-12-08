/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/08 07:46:36 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/08 09:36:20 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "includes/ft_readline.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		return (0);
	while (s1[count] && (s1[count] == s2[count]) && count < (n - 1))
		count++;
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

int	main(int argc, char **argv)
{
	char	*line;

	if (argc == 1 || argc == 2)
	{
		while (1)
		{
			line = ft_readline(argv[1]);
			printf("{Linha lida..: |%s|}\n", line);
			if (!ft_strncmp(line, "exit", 5))
			{
				free(line);
				return (0);
			}
			if (line)
				free(line);
		}
	}
	return (0);
}
