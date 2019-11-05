/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   does_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 21:01:38 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/14 01:02:17 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	first_oper(t_pile **a, t_pile **b, char *str)
{
	if (ft_strcmp(str, "ra") == 0)
		ft_ra(a);
	else if (ft_strcmp(str, "rra") == 0)
		ft_rra(a);
	else if (ft_strcmp(str, "rb") == 0)
		ft_ra(b);
	else if (ft_strcmp(str, "pb") == 0)
		ft_pb(a, b);
}

void	second_oper(t_pile **a, t_pile **b, char *str)
{
	if (ft_strcmp(str, "rrb") == 0)
		ft_rra(b);
	else if (ft_strcmp(str, "rr") == 0)
	{
		ft_ra(a);
		ft_ra(b);
	}
	else if (ft_strcmp(str, "rrr") == 0)
	{
		ft_rra(a);
		ft_rra(b);
	}
	else if (ft_strcmp(str, "pa") == 0)
		ft_pb(b, a);
}

void	third_oper(t_pile **a, t_pile **b, char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		ft_sa(a);
	else if (ft_strcmp(str, "sb") == 0)
		ft_sa(b);
	else if (ft_strcmp(str, "ss") == 0)
	{
		ft_sa(a);
		ft_sa(b);
	}
}

int		freeing(int x, t_pile **a, t_pile **b)
{
	free(*a);
	free(*b);
	return (x);
}

int		does_sort(t_pile **a, t_pile **b, char *str)
{
	char	**pa;
	int		i;

	if (str[0] == 0)
		return (freeing(is_a_sorted(*a), a, b));
	pa = ft_strparse(str, '\n');
	i = 0;
	while (pa[i] != NULL)
	{
		if (ft_strcmp(pa[i], "ra") == 0 || ft_strcmp(pa[i], "rra") ==
0 || ft_strcmp(pa[i], "rb") == 0 || ft_strcmp(pa[i], "pb") == 0)
			first_oper(a, b, pa[i]);
		else if (ft_strcmp(pa[i], "rrb") == 0 || ft_strcmp(pa[i], "rr") ==
0 || ft_strcmp(pa[i], "rrr") == 0 || ft_strcmp(pa[i], "pa") == 0)
			second_oper(a, b, pa[i]);
		else if (ft_strcmp(pa[i], "sa") == 0 || ft_strcmp(pa[i], "sb") ==
0 || ft_strcmp(pa[i], "ss") == 0)
			third_oper(a, b, pa[i]);
		i++;
	}
	free(pa);
	if ((*b) != NULL || (*a) == NULL)
		return (freeing(0, a, b));
	return (freeing(is_a_sorted(*a), a, b));
}
