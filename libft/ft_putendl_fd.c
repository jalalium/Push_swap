/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 22:52:41 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/14 01:39:27 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		i;
	char	n;

	i = 0;
	n = '\n';
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		if (fd == -1)
			break ;
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &n, 1);
}
