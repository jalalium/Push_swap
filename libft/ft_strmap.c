/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 23:04:20 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/15 21:58:50 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
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
		out[i] = f(s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
