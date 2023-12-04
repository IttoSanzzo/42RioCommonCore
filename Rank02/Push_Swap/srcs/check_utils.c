/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/26 21:35:12 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/27 02:39:50 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	nbstr_cmp(const char *s1, const char *s2)
{
	if (*s1 == '+' && *s2 != '+')
		s1++;
	else if (*s2 == '+')
		s2++;
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(int c)
{
	return (c == '+' || c == '-');
}
