/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:58:37 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 21:20:51 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*merge_in_a(t_pile **a, t_pile **b, char *str, int max)
{
	int range;

	range = count_push(*a, max);
	if (range <= 3)
		str = merge_three_down(a, str, max);
	else
		str = merge_three_up(a, b, str, max);
	return (str);
}

char	*merge_in_b(t_pile **a, t_pile **b, char *str, int max)
{
	int range;

	range = count_push(*b, max);
	if (range <= 6)
		str = merge_six_down(a, b, str, max);
	else
		str = merge_six_up(a, b, str, max);
	return (str);
}

char	*merge(t_pile **a, t_pile **b, char *str)
{
	int maxa;
	int maxb;

	maxa = maximum_push(*a);
	maxb = maximum_push(*b);
	while (!(maxa == 0 && length(*b) == 0))
	{
		if (maxa > maxb)
			str = merge_in_a(a, b, str, maxa);
		else
			str = merge_in_b(a, b, str, maxb);
		maxa = maximum_push(*a);
		maxb = maximum_push(*b);
	}
	return (str);
}
