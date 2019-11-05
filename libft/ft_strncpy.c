/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 21:28:39 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/15 21:29:14 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int size;
	int i;

	i = 0;
	size = ft_strlen(src);
	while (i < (int)len)
	{
		if (i >= size)
			dst[i] = 0;
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
