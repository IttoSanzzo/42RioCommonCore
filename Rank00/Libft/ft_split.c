/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 20:04:26 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/16 01:56:09 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wc(char *s, char c)
{
	int	i;
	int	wc;

	wc = 0;
	i = 0;
	if (s[i] != c && s[i] != 0)
		wc++;
	while (s[++i])
		if (s[i - 1] == c && s[i] != c)
			wc++;
	return (wc);
}

static char	*ft_wl(char *s, char c)
{
	int		i;
	int		temp;
	int		len;
	char	*ret;

	i = 0;
	len = 0;
	while (s[i])
	{
		temp = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i++] != c)
			temp++;
		if (temp > len)
			len = temp;
	}
	ret = (char *)malloc(sizeof (char) * len + 1);
	if (!ret)
		return (NULL);
	return (ret);
}

static char	**ft_split_up(char **tab, char *s, char c, int wc)
{
	int		i;
	int		y;
	int		w;
	char	*temp;

	temp = ft_wl(s, c);
	w = 0;
	i = 0;
	while (w < wc)
	{
		y = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			temp[y++] = s[i++];
		temp[y] = 0;
		tab[w] = ft_strdup(temp);
		w++;
	}
	free(temp);
	tab[w] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**tab;

	if (!s)
		return (NULL);
	wc = ft_wc((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!tab)
		return (NULL);
	tab = ft_split_up(tab, (char *)s, c, wc);
	return (tab);
}
