/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:47:09 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/18 19:48:14 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	char	*ft_itoa_neg(int n)
{
	int		a;
	char	*out;
	int		i;
	int		over;

	over = (n == -2147483648 ? 1 : 0);
	n = (n == -2147483648 ? 2147483647 : -n);
	a = ft_log(n);
	i = 1;
	out = (char*)malloc(a + 2);
	if (!out)
		return (NULL);
	out[0] = '-';
	if (a > 1)
		out[i++] = n / ft_pow(a - 1) + 48;
	while (i < a)
	{
		out[i] = n / ft_pow(a - i) - 10 * (n / ft_pow(a - i + 1)) + 48;
		i++;
	}
	out[i] = n % 10 + 48 + over;
	out[i + 1] = '\0';
	return (out);
}

char			*ft_itoa(int n)
{
	int		a;
	char	*out;
	int		i;

	i = 0;
	if (n < 0)
		return (ft_itoa_neg(n));
	a = ft_log(n);
	if (n == 0)
		a = 1;
	out = (char*)malloc(a + 1);
	if (!out)
		return (NULL);
	if (a > 1)
		out[i++] = n / ft_pow(a - 1) + 48;
	while (i < a - 1)
	{
		out[i] = (n / ft_pow(a - i - 1) - 10 * (n / ft_pow(a - i))) + 48;
		i++;
	}
	out[i] = n % 10 + 48;
	out[i + 1] = '\0';
	return (out);
}
