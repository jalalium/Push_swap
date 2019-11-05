/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_in_a_routines.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:05:19 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:06:20 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*rewindd(t_pile **a, char *str, int max)
{
	while (last(*a)->push == max)
	{
		ft_rra(a);
		str = ft_instr_join(str, "rra\n");
	}
	return (str);
}

char	*skip_element_ra(t_pile **a, char *str)
{
	(*a)->push += 7;
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	return (str);
}

char	*skip_element_rra(t_pile **a, char *str)
{
	(*a)->push += 7;
	ft_rra(a);
	str = ft_instr_join(str, "rra\n");
	return (str);
}

char	*push_and_down(t_pile **a, t_pile **b, char *str)
{
	ft_pb(a, b);
	(*b)->push += 5;
	ft_ra(b);
	str = ft_instr_join(str, "pb\nrb\n");
	return (str);
}

char	*just_push(t_pile **a, t_pile **b, char *str)
{
	ft_pb(a, b);
	(*b)->push += 6;
	str = ft_instr_join(str, "pb\n");
	return (str);
}
