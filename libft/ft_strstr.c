/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:14:05 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 13:13:42 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int lh;
	int ln;
	int j;

	i = 0;
	lh = (int)ft_strlen(haystack);
	ln = (int)ft_strlen(needle);
	if ((lh == ln && ft_strcmp(haystack, needle) == 0) || ln == 0)
		return ((char*)haystack);
	while (i < lh - ln + 1)
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
