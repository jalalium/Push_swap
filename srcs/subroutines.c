/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subroutines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:50:48 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 16:53:36 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	assign_values(int *x, int *y, int *z, t_pile *a)
{
	*x = a->sup_p;
	*y = a->next->sup_p;
	*z = a->next->next->sup_p;
}

void	make_push_zero(t_pile **a)
{
	(*a)->push = 0;
	(*a)->next->push = 0;
	(*a)->next->next->push = 0;
}

int		maxing(t_pile *a)
{
	t_pile	*tmp;
	int		max;

	tmp = a;
	max = -1;
	while (tmp != NULL)
	{
		if (tmp->sup_p > max)
			max = tmp->sup_p;
		tmp = tmp->next;
	}
	return (max);
}

int		mining(t_pile *a)
{
	t_pile	*tmp;
	int		max;

	tmp = a;
	max = 2147483647;
	while (tmp != NULL)
	{
		if (tmp->sup_p < max)
			max = tmp->sup_p;
		tmp = tmp->next;
	}
	return (max);
}

void	minim(int *a, int *b, int *c)
{
	int x;
	int y;
	int z;

	x = *a;
	y = *b;
	z = *c;
	x = x > y ? y : x;
	z = x > z ? z : x;
	*a -= z;
	*b -= z;
	*c -= z;
}
