/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_down.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:41:27 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 16:11:03 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*sort_acb(t_pile **a, char *str)
{
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_rra(a);
	str = ft_instr_join(str, "rra\n");
	return (str);
}

char	*sort_bca(t_pile **a, char *str)
{
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_rra(a);
	str = ft_instr_join(str, "rra\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	return (str);
}

char	*sort_cab(t_pile **a, char *str)
{
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_rra(a);
	str = ft_instr_join(str, "rra\n");
	return (str);
}

char	*sort_three(t_pile **a, char *str)
{
	int x;
	int y;
	int z;

	assign_values(&x, &y, &z, *a);
	minim(&x, &y, &z);
	if (x == 0 && y == 2 && z == 1)
		str = sort_acb(a, str);
	else if (x == 1 && y == 0 && z == 2)
	{
		ft_sa(a);
		str = ft_instr_join(str, "sa\n");
	}
	else if (x == 1 && y == 2 && z == 0)
		str = sort_bca(a, str);
	else if (x == 2 && y == 0 && z == 1)
		str = sort_cab(a, str);
	else if (x == 2 && y == 1 && z == 0)
	{
		ft_sa(a);
		str = ft_instr_join(str, "sa\n");
		str = sort_bca(a, str);
	}
	make_push_zero(a);
	return (str);
}

char	*sort_threedown(t_pile **a, char *str)
{
	int len;

	len = count_push(*a, (*a)->push);
	if (len == 1)
		(*a)->push = 0;
	if (len == 2)
	{
		if ((*a)->val > (*a)->next->val)
		{
			ft_sa(a);
			str = ft_instr_join(str, "sa\n");
		}
		(*a)->push = 0;
		(*a)->next->push = 0;
	}
	if (len == 3)
		return (sort_three(a, str));
	return (str);
}
