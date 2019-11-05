/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:46:54 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 12:23:13 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int l;

	l = (int)n - 1;
	dst = (char*)dst;
	src = (char*)src;
	while (l > -1)
	{
		*(char*)(dst + l) = *(char*)(src + l);
		l--;
	}
	return (dst);
}
