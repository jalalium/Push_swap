/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:07:20 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 12:27:05 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int k;

	i = 0;
	k = (int)ft_strlen(s1);
	while (i < (int)ft_strlen(s2))
	{
		s1[k + i] = s2[i];
		i++;
	}
	s1[k + i] = '\0';
	return (s1);
}
