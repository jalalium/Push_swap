/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_in_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:10:10 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 17:12:09 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*free_b_top(t_pile **a, t_pile **b, char *str, int max)
{
	int range;
	int min;
	int spread;

	range = count_push(*b, max);
	min = find_minofpush(*b, max);
	spread = find_maxofpush(*b, max) - min;
	while (range)
	{
		if ((*b)->sup_p < min + spread / 3)
			str = skip_element_rb(b, str);
		else
		{
			if ((*b)->sup_p < min + 2 * spread / 3)
				str = push_and_down_b(a, b, str);
			else
				str = just_push_b(a, b, str);
		}
		range = count_push(*b, max);
	}
	return (str);
}

char	*free_b_bottom(t_pile **a, t_pile **b, char *str, int max)
{
	int range;
	int min;
	int spread;

	range = count_push(*b, max);
	min = find_minofpush(*b, max);
	spread = find_maxofpush(*b, max) - min;
	while (range)
	{
		ft_rra(b);
		str = ft_instr_join(str, "rrb\n");
		if ((*b)->sup_p < min + spread / 3)
			(*b)->push += 5;
		else
		{
			if ((*b)->sup_p < min + 2 * spread / 3)
				str = push_and_down_b(a, b, str);
			else
				str = just_push_b(a, b, str);
		}
		range = count_push(*b, max);
	}
	return (str);
}

char	*merge_six_up(t_pile **a, t_pile **b, char *str, int max)
{
	if ((*b)->push == max)
		str = free_b_top(a, b, str, max);
	else
		str = free_b_bottom(a, b, str, max);
	return (str);
}

char	*merge_six_down(t_pile **a, t_pile **b, char *str, int max)
{
	if ((*b)->push == max && last((*b))->push == max)
		str = push_all_b(a, b, str);
	else if ((*b)->push == max)
		str = push_six_top(a, b, str, max);
	else
		str = push_six_bottom(a, b, str, max);
	return (str);
}
