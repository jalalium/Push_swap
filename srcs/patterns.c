/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patterns.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:23:34 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 16:51:04 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*pat_four(t_pile **a, char *str)
{
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	return (str);
}

char	*pat_five(t_pile **a, t_pile **b, char *str)
{
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_rra(a);
	str = ft_instr_join(str, "rra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	return (str);
}

char	*pat_six(t_pile **a, t_pile **b, char *str)
{
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_pb(a, b);
	str = ft_instr_join(str, "pb\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	return (str);
}

char	*pat_seven(t_pile **a, t_pile **b, char *str)
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
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	return (str);
}

char	*pat_eight(t_pile **a, t_pile **b, char *str)
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
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_pb(b, a);
	str = ft_instr_join(str, "pa\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	return (str);
}
