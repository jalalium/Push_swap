/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_in_b_routines.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:17:37 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:21:02 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int		maximum_push(t_pile *a)
{
	t_pile	*tmp;
	int		out;

	tmp = a;
	out = -1;
	while (tmp != NULL)
	{
		if (tmp->push > out)
			out = tmp->push;
		tmp = tmp->next;
	}
	return (out);
}

char	*skip_element_rb(t_pile **b, char *str)
{
	(*b)->push += 5;
	ft_ra(b);
	str = ft_instr_join(str, "rb\n");
	return (str);
}

char	*skip_element_rrb(t_pile **b, char *str)
{
	(*b)->push += 5;
	ft_rra(b);
	str = ft_instr_join(str, "rrb\n");
	return (str);
}

char	*push_and_down_b(t_pile **a, t_pile **b, char *str)
{
	(*b)->push += 6;
	ft_pb(b, a);
	ft_ra(a);
	str = ft_instr_join(str, "pa\nra\n");
	return (str);
}

char	*just_push_b(t_pile **a, t_pile **b, char *str)
{
	(*b)->push += 7;
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	return (str);
}
