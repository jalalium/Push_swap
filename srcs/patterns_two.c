/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patterns_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:24:33 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:26:20 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*pat_one(t_pile **a, t_pile **b, char *str)
{
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	return (str);
}

char	*pat_two(t_pile **a, t_pile **b, char *str)
{
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	return (str);
}

char	*pat_three(t_pile **a, t_pile **b, char *str)
{
	ft_rra(a);
	str = ft_instr_join(str, "rra\n");
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	return (str);
}
