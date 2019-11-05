/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:56:10 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 11:51:39 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int l;

	l = 0;
	dst = (unsigned char*)dst;
	src = (unsigned char*)src;
	while (l < (int)n)
	{
		*(unsigned char*)(dst + l) = *(unsigned char*)(src + l);
		if (*(unsigned char*)(src + l) == (unsigned char)c)
			return (dst + l + 1);
		l++;
	}
	return (NULL);
}
