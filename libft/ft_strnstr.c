/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:34:05 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/19 11:51:09 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int lh;
	int ln;
	int j;

	i = 0;
	lh = (int)ft_strlen(haystack);
	ln = (int)ft_strlen(needle);
	if (ln == 0)
		return ((char*)haystack);
	while (i + ln <= lh && i + ln <= (int)len)
	{
		j = 0;
		while (j < ln)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (j == ln)
			return ((char*)haystack + i);
		i++;
	}
	return (NULL);
}
