/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_sub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 23:10:57 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:37:16 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int		ft_ptrchr(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i] != 0)
		i++;
	return (i);
}

int		front_sp(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] == c)
		i++;
	return (i);
}

int		back_sp(char *str, char c, int len)
{
	int i;
	int end;

	end = 0;
	i = 1;
	while (str[len - i] == c)
	{
		end++;
		i++;
	}
	return (end);
}
