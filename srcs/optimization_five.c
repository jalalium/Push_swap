/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimization_five.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:22:12 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 16:48:16 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int		pattern_matching(int *tab)
{
	if (tab[0] == 1 && tab[1] == 2 && tab[2] == 5 && tab[3] == 4 && tab[4] == 3)
		return (1);
	if (tab[0] == 5 && tab[1] == 1 && tab[2] == 2 && tab[3] == 4 && tab[4] == 3)
		return (2);
	if (tab[0] == 5 && tab[1] == 2 && tab[2] == 4 && tab[3] == 3 && tab[4] == 1)
		return (3);
	if (tab[0] == 5 && tab[1] == 4 && tab[2] == 1 && tab[3] == 2 && tab[4] == 3)
		return (4);
	if (tab[0] == 5 && tab[1] == 4 && tab[2] == 2 && tab[3] == 3 && tab[4] == 1)
		return (5);
	if (tab[0] == 5 && tab[1] == 4 && tab[2] == 3 && tab[3] == 1 && tab[4] == 2)
		return (6);
	if (tab[0] == 5 && tab[1] == 4 && tab[2] == 3 && tab[3] == 2 && tab[4] == 1)
		return (7);
	if (tab[0] == 2 && tab[1] == 5 && tab[2] == 4 && tab[3] == 3 && tab[4] == 1)
		return (8);
	return (0);
}

int		spec_case(t_pile *a)
{
	int		tab[5];
	int		i;
	t_pile	*tmp;

	tmp = a;
	i = 0;
	while (tmp != NULL)
	{
		tab[i] = tmp->sup_p + 1;
		tmp = tmp->next;
		i++;
	}
	return (pattern_matching(tab));
}

char	*optimized(t_pile **a, t_pile **b, char *str, int pat)
{
	if (pat == 1)
		str = pat_one(a, b, str);
	if (pat == 2)
		str = pat_two(a, b, str);
	if (pat == 3)
		str = pat_three(a, b, str);
	if (pat == 4)
		str = pat_four(a, str);
	if (pat == 5)
		str = pat_five(a, b, str);
	if (pat == 6)
		str = pat_six(a, b, str);
	if (pat == 7)
		str = pat_seven(a, b, str);
	if (pat == 8)
		str = pat_eight(a, b, str);
	return (str);
}
