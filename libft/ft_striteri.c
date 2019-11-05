/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 23:00:16 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 23:38:55 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int i;

	i = 0;
	if (s && f)
	{
		while (i < (unsigned int)ft_strlen(s))
		{
			f(i, s + i);
			i++;
		}
	}
}
