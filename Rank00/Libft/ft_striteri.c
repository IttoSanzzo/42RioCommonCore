/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/27 20:42:56 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/27 20:43:08 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}
