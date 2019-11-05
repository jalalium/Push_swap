/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:49:21 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 11:52:21 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*out;

	i = 0;
	if (!s)
		return (NULL);
	out = (char*)malloc((int)ft_strlen(s) + 1);
	if (!out)
		return (NULL);
	ft_bzero(out, (int)ft_strlen(s) + 1);
	while (i < (int)ft_strlen(s))
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
