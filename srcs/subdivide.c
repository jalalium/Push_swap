/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subdivide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:55:03 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 16:57:01 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*pushit(t_pile **a, t_pile **b, t_tuple lims, char *str)
{
	int range;

	range = lims.max - lims.min;
	if ((*a)->sup_p + 1 - lims.min <= range / 3)
	{
		ft_pb(a, b);
		(*b)->push++;
		ft_ra(b);
		str = ft_instr_join(str, "pb\nrb\n");
	}
	else
	{
		ft_pb(a, b);
		(*b)->push += 2;
		str = ft_instr_join(str, "pb\n");
	}
	return (str);
}

char	*subdivide(t_pile **a, t_pile **b, char *str)
{
	t_tuple	lims;
	int		range;
	int		done;

	while (length(*a) > 3)
	{
		lims.max = maxing(*a);
		lims.min = mining(*a);
		done = 0;
		range = lims.max - lims.min;
		while (done <= range)
		{
			if ((*a)->sup_p + 1 - lims.min <= 2 * range / 3)
				str = pushit(a, b, lims, str);
			else
			{
				(*a)->push += 3;
				ft_ra(a);
				str = ft_instr_join(str, "ra\n");
			}
			done++;
		}
	}
	return (str);
}
