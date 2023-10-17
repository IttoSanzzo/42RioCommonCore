/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 20:55:58 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/16 16:01:41 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	if (!(n / 10))
		return (1 + 1 * (n < 0));
	return (1 + ft_nbrlen(n / 10));
}

static void	ft_itoa_w(int n, char *dst)
{
	if (n > 9)
		ft_itoa_w(n / 10, dst - 1);
	*dst = n % 10 + 48;
	if (n <= 9)
		*(dst + 1) = 0;
}

char	*ft_itoa(int n)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1));
	if (!dst)
		return (NULL);
	if (n == -2147483648)
		ft_strlcpy(dst, "-2147483648", 12);
	else
	{
		dst[ft_nbrlen(n)] = 0;
		if (n < 0)
			dst[0] = '-';
		ft_itoa_w(n + (2 * (-1 * n * (n < 0))), dst + ft_nbrlen(n) - 1);
	}
	return (dst);
}
