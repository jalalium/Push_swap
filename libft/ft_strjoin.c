/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 12:43:09 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/15 22:09:21 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l1;
	int		l2;
	int		size;
	char	*out;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	l1 = (int)ft_strlen(s1);
	l2 = (int)ft_strlen(s2);
	size = l1 + l2;
	out = (char*)malloc(sizeof(char) * (size + 1));
	if (!out)
		return (NULL);
	while (i < size + 1)
	{
		out[i] = (i > l1 - 1 ? s2[i - l1] : s1[i]);
		i++;
	}
	out[size + 1] = '\0';
	return (out);
}
