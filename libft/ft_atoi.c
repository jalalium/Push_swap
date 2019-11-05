/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 11:38:06 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/06 19:49:07 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int	ft_whitespc(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\r' || c == '\f' || c == '\v')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	unsigned	int	out;
	int				res;
	int				sign;
	int				i;
	int				over;

	out = 0;
	sign = 1;
	i = 0;
	while (ft_whitespc(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-' ? -1 : 1);
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		out = 10 * out + str[i] - 48;
		i++;
	}
	res = (out == 2147483648 ? 2147483647 : (int)out);
	over = (out == 2147483648 ? 1 : 0);
	return (res * sign - over);
}
