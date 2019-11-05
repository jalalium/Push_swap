/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:29:14 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:37:35 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort(int *tab, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

int		doublons(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		if (tab[i] == tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int		find_in_tab(int *tab, int x, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (tab[i] == x)
			return (i);
		i++;
	}
	return (-1);
}

void	fill_sup(int *tab, t_pile *a, int len)
{
	t_pile *tmp;

	tmp = a;
	while (tmp != NULL)
	{
		tmp->sup_p = find_in_tab(tab, tmp->val, len);
		tmp->push = 1;
		tmp = tmp->next;
	}
	return ;
}
