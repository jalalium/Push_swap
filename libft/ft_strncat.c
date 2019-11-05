/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:05:19 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 12:27:24 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int l1;
	int l2;
	int max;

	i = 0;
	l1 = (int)ft_strlen(s1);
	l2 = (int)ft_strlen(s2);
	max = ((int)n > l2 ? l2 : (int)n);
	while (i < max)
	{
		s1[l1 + i] = s2[i];
		i++;
	}
	s1[l1 + i] = '\0';
	return (s1);
}
