/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:56:11 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/23 19:37:59 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*out;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	out = (char*)malloc(len + 1);
	if (!out)
		return (NULL);
	ft_bzero(out, len + 1);
	while ((size_t)i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
