/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 11:39:24 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 15:17:55 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0' && (size_t)i < n)
		i++;
	if ((size_t)i == n || (s1[i] == '\0' && s2[i] == '\0'))
		return (1);
	return (0);
}
