/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:34:22 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/18 19:50:21 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int size;
	int i;
	int m;
	int letter;

	m = n;
	if (n < 0)
		m = (n == -2147483648 ? 2147483647 : -n);
	size = (m == 0 ? 1 : ft_log(m));
	i = 1;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (m > 9)
		ft_putchar_fd(m / ft_pow(size - 1) + 48, fd);
	while (i < size - 1)
	{
		letter = m / ft_pow(size - i - 1) - 10 * (m / ft_pow(size - i)) + 48;
		ft_putchar_fd(letter, fd);
		i++;
	}
	ft_putchar_fd((n == -2147483648 ? '8' : m % 10 + 48), fd);
}
