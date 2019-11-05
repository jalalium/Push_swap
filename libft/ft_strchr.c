/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:35:32 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/18 23:29:06 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	while (s[i] != c && i < k)
		i++;
	if (i == k && c == '\0')
		return ((char*)s + i);
	else if (i == k)
		return (NULL);
	else
		return ((char*)s + i);
}
