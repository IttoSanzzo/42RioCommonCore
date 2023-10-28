/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/27 20:47:45 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/27 23:53:46 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *substr;
        size_t  i;

        if (!s)
                return (0);
        if (start >= ft_strlen(s))
                return (ft_strdup(""));
        if (ft_strlen(s + start) < len)
                len = ft_strlen(s + start);
        substr = (char *)malloc(sizeof(char) * len + 1);
        if (!substr)
                return (0);
        i = 0;
        while (s[start] && i < len)
        {
                substr[i] = s[start];
                i++;
                start++;
        }
        substr[i] = '\0';
        return (substr);
}
