/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_check_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 21:02:42 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 15:45:57 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	exit_routine(void)
{
	ft_putstr("Error\n");
	exit(0);
}

char	*get_input(void)
{
	char	*str;
	char	*instr;
	int		last;
	int		count;

	str = (char*)malloc(sizeof(char) * 2);
	instr = (char*)malloc(sizeof(char) * 1);
	str[1] = 0;
	instr[0] = 0;
	last = 0;
	count = 0;
	while (read(0, str, 1) == 1)
	{
		if (str[0] == '\n')
		{
			if (invalid_instr(instr + last) == 1)
				exit_routine();
			last = count + 1;
		}
		count++;
		instr = ft_instr_join(instr, str);
	}
	return (instr);
}

int		check_for_empty_command(char *str)
{
	if (str[0] == 0)
		return (1);
	return (0);
}

int		invalid_instr(char *str)
{
	char	**pa;
	int		i;

	if (check_for_empty_command(str) == 1)
		exit_routine();
	pa = ft_strparse(str, '\n');
	i = 0;
	while (pa[i] != NULL)
	{
		if (ft_strcmp(pa[i], "ra") != 0 && ft_strcmp(pa[i], "rb") !=
				0 && ft_strcmp(pa[i], "rra") != 0 && ft_strcmp(pa[i], "rrb") !=
				0 && ft_strcmp(pa[i], "rr") != 0 && ft_strcmp(pa[i], "rrr") !=
				0 && ft_strcmp(pa[i], "pa") != 0 && ft_strcmp(pa[i], "pb") !=
				0 && ft_strcmp(pa[i], "pp") != 0 && ft_strcmp(pa[i], "sa") !=
				0 && ft_strcmp(pa[i], "sb") && ft_strcmp(pa[i], "ss") != 0)
			return (1);
		i++;
	}
	free(pa);
	return (0);
}
