/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 13:49:26 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:55:45 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_pile	*last(t_pile *a)
{
	t_pile *tmp;

	tmp = a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

t_pile	*bef_last(t_pile *a)
{
	t_pile *tmp;

	tmp = a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

int		find_minofpush(t_pile *a, int max)
{
	t_pile	*tmp;
	int		min;

	tmp = a;
	min = 2147483647;
	while (tmp != NULL)
	{
		if (tmp->push == max && tmp->sup_p < min)
			min = tmp->sup_p;
		tmp = tmp->next;
	}
	return (min);
}

int		find_maxofpush(t_pile *a, int max)
{
	t_pile	*tmp;
	int		min;

	tmp = a;
	min = -1;
	while (tmp != NULL)
	{
		if (tmp->push == max && tmp->sup_p > min)
			min = tmp->sup_p;
		tmp = tmp->next;
	}
	return (min);
}
