/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 12:15:51 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 15:07:09 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	i = k;
	while (s[i] != c && i > 0)
		i--;
	if (c == '\0')
		return ((char*)s + i);
	if (i == 0 && s[0] != c)
		return (NULL);
	return ((char*)s + i);
}
