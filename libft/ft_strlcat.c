/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 23:23:41 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 12:28:36 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int t;

	t = 0;
	i = ft_strlen(dst);
	while (i + t < (int)size - 1 && src[t] != '\0')
	{
		dst[i + t] = src[t];
		t++;
	}
	dst[i + t] = '\0';
	while (src[t] != '\0')
		t++;
	if (i > (int)size)
		return (t + (int)size);
	return (i + t);
}
