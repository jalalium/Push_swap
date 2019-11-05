/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_in_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:01:50 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:09:00 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*free_a_top(t_pile **a, t_pile **b, char *str, int max)
{
	int range;
	int min;
	int spread;

	range = count_push(*a, max);
	min = find_minofpush(*a, max);
	spread = find_maxofpush(*a, max) - min;
	while (range)
	{
		if ((*a)->sup_p >= min + 2 * spread / 3)
			str = skip_element_ra(a, str);
		else
		{
			if ((*a)->sup_p < min + spread / 3)
				str = push_and_down(a, b, str);
			else
				str = just_push(a, b, str);
		}
		range = count_push(*a, max);
	}
	return (str);
}

char	*free_a_bottom(t_pile **a, t_pile **b, char *str, int max)
{
	int range;
	int min;
	int spread;

	range = count_push(*a, max);
	min = find_minofpush(*a, max);
	spread = find_maxofpush(*b, max) - min;
	while (range)
	{
		ft_rra(a);
		str = ft_instr_join(str, "rra\n");
		if ((*a)->sup_p >= min + 2 * spread / 3)
			(*a)->push += 7;
		else
		{
			if ((*a)->sup_p < min + spread / 3)
				str = push_and_down(a, b, str);
			else
				str = just_push(a, b, str);
		}
		range = count_push(*a, max);
	}
	return (str);
}

char	*merge_three_up(t_pile **a, t_pile **b, char *str, int max)
{
	if ((*a)->push == max)
		str = free_a_top(a, b, str, max);
	else
		str = free_a_bottom(a, b, str, max);
	return (str);
}

char	*merge_three_down(t_pile **a, char *str, int max)
{
	if ((*a)->push == max)
	{
		str = sort_threedown(a, str);
		return (str);
	}
	else
	{
		str = rewindd(a, str, max);
		str = sort_threedown(a, str);
		return (str);
	}
}
