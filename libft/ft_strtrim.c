/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:31:38 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/19 17:55:02 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int	ft_white_front_count(char const *s)
{
	int i;

	i = 0;
	while (ft_white(s[i]))
		i++;
	return (i);
}

static	int	ft_white_back_count(char const *s)
{
	int i;

	i = (int)ft_strlen(s) - 1;
	while (ft_white(s[i]) && i > 0)
		i--;
	return (i + 1);
}

char		*ft_strtrim(char const *s)
{
	char	*out;
	int		i;
	int		j;
	int		deb;
	int		fin;

	if (!s)
		return (NULL);
	deb = ft_white_front_count(s);
	fin = ft_white_back_count(s);
	i = deb;
	j = 0;
	out = (char*)malloc(deb == (int)ft_strlen(s) ? 1 : fin - deb + 1);
	if (!out)
		return (NULL);
	if (deb == (int)ft_strlen(s))
	{
		out[0] = '\0';
		return (out);
	}
	while (i < fin)
		out[j++] = s[i++];
	out[j] = '\0';
	return (out);
}
