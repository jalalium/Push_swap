/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:35:32 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/19 21:15:40 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sc;

	sc = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (*(sc + i) == (unsigned char)c)
			return ((void*)(sc + i));
		i++;
	}
	return (NULL);
}
