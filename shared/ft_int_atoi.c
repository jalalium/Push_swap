/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 11:38:06 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:58:39 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int		ft_whitespc(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\r' || c == '\f' || c == '\v')
		return (1);
	else
		return (0);
}

int		ft_check_word(char *str, int *check)
{
	int len;
	int i;

	len = ft_strlen(str);
	*check = 1;
	i = 0;
	if (ft_strlen(str) > 11)
		return (-1);
	while (i < len)
	{
		if (ft_isdigit(str[i]) != 1 && str[i] != '+' && str[i] != '-')
			return (-1);
		i++;
	}
	*check = 0;
	return (1);
}

int		ft_int_atoi(const char *str, int *check, long long out, int sign)
{
	int	i;
	int k;

	i = 0;
	k = 0;
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
		k++;
	}
	if (out >= 2147483648 || k == 0)
	{
		if (!(out == 2147483648 && sign == -1))
			*check = 1;
	}
	return (out * sign);
}
