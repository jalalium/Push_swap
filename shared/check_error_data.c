/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:34:12 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 21:31:24 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	already_sorted(t_pile *a, int *check)
{
	t_pile	*tmp;
	int		x;

	x = 0;
	tmp = a;
	while (tmp != NULL)
	{
		if (tmp->sup_p != tmp->act_p)
			x++;
		tmp = tmp->next;
	}
	if (x == 0)
		*check = -1;
}

void	fill_order(t_pile *a, int *check)
{
	int len;
	int *tab;

	len = length(a);
	if (*check == 1)
		return ;
	tab = (int*)malloc(sizeof(int) * len);
	populate(tab, a);
	sort(tab, len);
	*check = doublons(tab, len);
	if (*check == 1)
		return ;
	fill_sup(tab, a, len);
	already_sorted(a, check);
}

int		check_for_wrong_chars(char **str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (str[i][j] != 0)
		{
			if (ft_isdigit(str[i][j]) != 1 && str[i][j] !=
					' ' && str[i][j] != '-')
				return (1);
			if (str[i][j] == '-' && j != 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

t_pile	*get_data(int argc, char **argv, int *check)
{
	char	**tmp;
	t_pile	*out;

	if (argc < 2)
	{
		*check = -1;
		return (NULL);
	}
	tmp = ft_strparse(concat(argc, argv, NULL), ' ');
	*check = check_for_wrong_chars(tmp);
	out = generate_pile(tmp, check, 0);
	fill_order(out, check);
	free(tmp);
	if (*check == 1)
		return (NULL);
	return (out);
}

int		error_check(int check)
{
	if (check == 1)
		ft_putstr("Error\n");
	return (0);
}
