/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_only_subs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:09:04 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 16:18:50 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*three_only_acb(t_pile **a, char *str)
{
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	return (str);
}

char	*three_only_bac(t_pile **a, char *str)
{
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	return (str);
}

char	*three_only_bca(t_pile **a, char *str)
{
	ft_rra(a);
	str = ft_instr_join(str, "rra\n");
	return (str);
}

char	*three_only_cab(t_pile **a, char *str)
{
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	return (str);
}

char	*three_only_cba(t_pile **a, char *str)
{
	ft_ra(a);
	str = ft_instr_join(str, "ra\n");
	ft_sa(a);
	str = ft_instr_join(str, "sa\n");
	return (str);
}
