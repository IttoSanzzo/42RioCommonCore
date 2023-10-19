/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 16:22:52 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/19 15:52:42 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//// LIBS
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# include <stdint.h>

//// Prototypes
// Core Functions
int		ft_printf(const char *str, ...);
int		ft_ftypes(va_list args, const char format);

// Print Functions
int		ft_printpercent(void);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int nb);
int		ft_printunsigned(unsigned int nb);
int		ft_printhex(int nb, const char format);
int		ft_printpointer(unsigned long long ptr);

// Utils Functions
void	ft_lputchar(int c, int *len);
int		ft_nbrlen(int nb);

#endif
