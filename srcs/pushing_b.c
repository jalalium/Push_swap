/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:15:22 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:17:05 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*push_six_top(t_pile **a, t_pile **b, char *str, int max)
{
	int range;
	int min;
	int spread;

	range = count_push(*b, max);
	min = find_minofpush(*b, max);
	spread = find_maxofpush(*b, max) - min;
	while ((*b)->push == max)
	{
		ft_pb(b, a);
		str = ft_instr_join(str, "pa\n");
		(*a)->push += 3;
		if ((*a)->sup_p < min + spread / 2)
		{
			(*a)->push--;
			ft_ra(a);
			str = ft_instr_join(str, "ra\n");
		}
	}
	return (str);
}

char	*push_six_bottom(t_pile **a, t_pile **b, char *str, int max)
{
	int range;
	int min;
	int spread;

	range = count_push(*b, max);
	min = find_minofpush(*b, max);
	spread = find_maxofpush(*b, max) - min;
	while (last(*b)->push == max)
	{
		ft_rra(b);
		str = ft_instr_join(str, "rrb\n");
		ft_pb(b, a);
		str = ft_instr_join(str, "pa\n");
		(*a)->push += 3;
		if ((*a)->sup_p < min + spread / 2)
		{
			(*a)->push--;
			ft_ra(a);
			str = ft_instr_join(str, "ra\n");
		}
	}
	return (str);
}

char	*push_all_b(t_pile **a, t_pile **b, char *str)
{
	while ((*b) != NULL)
	{
		ft_pb(b, a);
		str = ft_instr_join(str, "pa\n");
	}
	return (str);
}
