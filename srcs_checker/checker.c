/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 17:39:51 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/14 17:16:50 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int		is_a_sorted(t_pile *a)
{
	t_pile	*tmp;
	int		old;

	tmp = a->next;
	old = a->val;
	while (tmp != NULL)
	{
		if (tmp->val < old)
			return (0);
		old = tmp->val;
		tmp = tmp->next;
	}
	return (1);
}

void	exit_func(void)
{
	ft_putstr("Error\n");
	exit(0);
}

int		main(int argc, char **argv)
{
	int		check;
	t_pile	*a;
	t_pile	*b;
	char	*str;

	check = 0;
	b = NULL;
	if (argc < 2)
		return (0);
	a = get_data(argc, argv, &check);
	if (check == 1)
		exit_func();
	str = get_input();
	if ((str[0] != 0 && invalid_instr(str) == 1) || check == 1)
		exit_func();
	if (does_sort(&a, &b, str))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	free(str);
	return (0);
}
