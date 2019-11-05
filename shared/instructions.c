/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:55:10 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 21:34:47 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_ra(t_pile **a)
{
	t_pile *tmp;
	t_pile *tmp2;

	tmp2 = *a;
	if (tmp2 == NULL || length(*a) < 2)
		return ;
	else
	{
		tmp = tmp2->next;
		last(tmp)->next = tmp2;
		tmp2->next = NULL;
	}
	*a = tmp;
	return ;
}

void	ft_rra(t_pile **a)
{
	t_pile *tmp;
	t_pile *tmp2;
	t_pile *tmp3;

	tmp2 = *a;
	if (tmp2 == NULL || length(*a) < 2)
		return ;
	tmp = last(tmp2);
	tmp3 = bef_last(tmp2);
	tmp->next = tmp2;
	tmp3->next = NULL;
	*a = tmp;
	return ;
}

void	ft_sa(t_pile **a)
{
	t_pile *tmp;
	t_pile *tmp2;
	t_pile *tmp3;

	tmp = *a;
	if (length(tmp) < 2)
		return ;
	tmp2 = tmp->next;
	tmp3 = tmp2->next;
	tmp->next = tmp3;
	tmp2->next = tmp;
	*a = tmp2;
	return ;
}

void	ft_pb(t_pile **a, t_pile **b)
{
	t_pile *tmp;
	t_pile *tmp2;
	t_pile *tmp3;

	tmp = *a;
	tmp2 = *b;
	if (tmp == NULL)
		return ;
	tmp3 = tmp->next;
	tmp->next = tmp2;
	*a = tmp3;
	*b = tmp;
	return ;
}
