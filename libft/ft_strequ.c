/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 11:39:24 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/15 22:04:51 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int	ft_const_strlen(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (ft_const_strlen(s1) != ft_const_strlen(s2))
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == ft_const_strlen(s1))
		return (1);
	return (0);
}
