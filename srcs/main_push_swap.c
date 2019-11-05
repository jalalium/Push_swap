/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:28:14 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 21:22:30 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	print_results(char *str, int i)
{
	while (str[i] != 0)
	{
		if ((i == 0 || str[i - 1] == '\n') && (str[i] == 'r' &&
str[i + 1] == 'b' && str[i + 2] == '\n' && str[i + 3] == 'r' &&
str[i + 4] == 'a' && str[i + 5] == '\n'))
		{
			ft_putstr("rr\n");
			i += 6;
		}
		else if ((i == 0 || str[i - 1] == '\n') && (str[i] == 'r' &&
str[i + 1] == 'a' && str[i + 2] == '\n' && str[i + 3] == 'r' &&
str[i + 4] == 'b' && str[i + 5] == '\n'))
		{
			ft_putstr("rr\n");
			i += 6;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	free(str);
}

int		main(int argc, char **argv)
{
	int		check;
	t_pile	*a;
	t_pile	*b;
	char	*str;

	check = 0;
	b = NULL;
	str = NULL;
	a = get_data(argc, argv, &check);
	if (check != 0)
		return (error_check(check));
	if (length(a) == 3)
		str = three_only(&a, str);
	else if (length(a) == 5 && spec_case(a) != 0)
		str = optimized(&a, &b, str, spec_case(a));
	else
	{
		str = subdivide(&a, &b, str);
		str = sort_threedown(&a, str);
		str = merge(&a, &b, str);
	}
	print_results(str, 0);
	free(a);
	free(b);
}
