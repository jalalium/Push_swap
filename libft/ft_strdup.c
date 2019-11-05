/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:53:59 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 12:26:07 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		length;
	char	*out;

	length = (int)ft_strlen(s1);
	i = 0;
	out = NULL;
	out = (char*)malloc(sizeof(char) * length + 1);
	if (!out)
		return (NULL);
	while (i < length)
	{
		out[i] = s1[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
