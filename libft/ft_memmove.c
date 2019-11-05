/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 11:47:03 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 12:24:21 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int l;
	int test;

	dst = (char*)dst;
	src = (char*)src;
	l = (int)len - 1;
	test = (int)(&(src[0])) - (int)(&(dst[0]));
	if (test > 0)
	{
		l = 0;
		while (l < (int)len)
		{
			*(char*)(dst + l) = *(char*)(src + l);
			l++;
		}
		return (dst);
	}
	dst = (char*)dst;
	src = (char*)src;
	while (l > -1)
	{
		*(char*)(dst + l) = *(char*)(src + l);
		l--;
	}
	return (dst);
}
