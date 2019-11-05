/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_pile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:24:28 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/09 18:01:10 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_pile		*generate_pile(char **tmp, int *check, int i)
{
	t_pile	*head;
	t_pile	*new;
	t_pile	*old;

	old = NULL;
	while (tmp[i] != NULL)
	{
		new = (t_pile*)malloc(sizeof(t_pile) * 1);
		if (i == 0)
		{
			head = new;
			old = new;
		}
		new->val = ft_int_atoi(tmp[i], check, 0, 1);
		new->act_p = i;
		if (old != NULL && i != 0)
		{
			old->next = new;
			old = new;
		}
		i++;
	}
	new->next = NULL;
	return (head);
}

int			length(t_pile *a)
{
	int		out;
	t_pile	*tmp;

	out = 0;
	tmp = a;
	while (tmp != NULL)
	{
		out++;
		tmp = tmp->next;
	}
	return (out);
}

int			count_push(t_pile *a, int n)
{
	int		out;
	t_pile	*tmp;

	out = 0;
	tmp = a;
	while (tmp != NULL)
	{
		if (tmp->push == n)
			out++;
		tmp = tmp->next;
	}
	return (out);
}

void		populate(int *tab, t_pile *a)
{
	t_pile	*tmp;
	int		i;

	tmp = a;
	i = 0;
	while (tmp != NULL)
	{
		tab[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
}
