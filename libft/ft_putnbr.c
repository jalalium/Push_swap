/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 13:43:48 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/18 18:16:50 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_putnbr(int n)
{
	int size;
	int i;
	int m;

	m = n;
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
		m = (n == -2147483648 ? 2147483647 : -n);
	size = ft_log(m);
	i = 1;
	if (n < 0)
		ft_putchar('-');
	if (m > 9)
		ft_putchar(m / ft_pow(size - 1) + 48);
	while (i < size - 1)
	{
		ft_putchar(m / ft_pow(size - i - 1) - 10 * (m / ft_pow(size - i)) + 48);
		i++;
	}
	ft_putchar((n == -2147483648 ? '8' : m % 10 + 48));
}
