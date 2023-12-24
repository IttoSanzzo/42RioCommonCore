/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_splitq.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/27 20:40:28 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/23 22:46:46 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

static int	wc_q(char const *s, char c)
{
	int	wcount;
	int	open;
	int	flag;
	int	i;

	open = -1;
	i = -1;
	flag = 1;
	wcount = 0;
	while (s[++i])
	{
		if (s[i] == c && !(i > 0 && s[i - 1] == '\\'))
			open = -open;
		if (s[i] == ' ' && open == -1)
			flag = 1;
		else if (s[i] && flag == 1 && ++wcount)
			flag = 0;
	}
	return (wcount);
}

static int	wlen_q(char const *s, char c)
{
	int	wlen;
	int	open;
	int	i;

	open = -1;
	i = -1;
	wlen = 0;
	while (s[++i])
	{
		if (s[i] == '\\' || s[i] == c)
		{
			if (s[i] == '\\' && s[++i])
				wlen++;
			if (s[i] == c)
				open = -open;
			if (s[i])
				continue ;
		}
		if ((s[i] == ' ' && open == -1) || s[i] == '\0')
			break ;
		wlen++;
	}
	return (wlen);
}
/*static char	*ft_newstring(char const *str, int count, int start, char c)
{
	char		*temp_string;
	int			count2;

	count2 = 0;
	temp_string = (char *)ft_calloc((count - start + 1), sizeof(char));
	if (!temp_string)
		return (NULL);
	while (str[start] != c && str[start])
		temp_string[count2++] = str[start++];
	temp_string[count2] = '\0';
	return (temp_string);
}*/

static char	*next_quote_q(char const *s, char c, int *i, char **tab)
{
	int		open;
	int		p;
	char	*quote;
	
	quote = (char*)ft_calloc(wlen_q(s, c) + 1, sizeof(char));
	if (!quote)
		return ((char*)ft_freetab(tab));
	open = -1;
	i[0]--;
	p = -1;
	while (s[++i[0]])
	{
		if (s[i[0]] == '\\' || s[i[0]] == c)
		{
			if (s[i[0]] == '\\' && s[++i[0]])
				quote[++p] = s[i[0]];
			if (s[i[0]] == c)
				open = -open;
			if (s[i[0]])
				continue ;
		}
		if ((s[i[0]] == ' ' && open == -1) || s[i[0]] == '\0')
			break ;
		quote[++p] = s[i[0]];
	}
	return (quote);
}

char	**ft_splitq(char const *s, char c)
{
	ft_printc(C_NCYAN, "Palavras..: %d\n", wc_q(s, c));
	ft_printc(C_NCYAN, "wlen..: %d\n", wlen_q(s, c));
	int		i[1];
	int		wc;
	int		y;
	char	**tab;

	if (!s)
		return (NULL);
	wc = wc_q(s, c);
	tab = (char**)ft_calloc(wc + 1, sizeof(char*));
	if (!tab)
		return (NULL);
	i[0] = 0;
	y = -1;
	while (s[i[0]] && ++y < wc)
	{
		while (s[i[0]] == ' ')
			i[0]++;
		if (!s[i[0]])
			break ;
		tab[y] = next_quote_q((char*)(s + i[0]), c, i, tab);
		if (!tab)
			return (NULL);
	}
	return (tab);
}
