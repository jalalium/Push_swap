/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:58:20 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/19 21:16:10 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*(p1 + i) == *(p2 + i))
	{
		if (i == n - 1)
			break ;
		i++;
	}
	if (i == n - 1 && *(p1 + i) == *(p2 + i))
		return (0);
	return (*(p1 + i) - *(p2 + i));
}
