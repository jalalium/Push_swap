/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joining_routines.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:18:19 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/10 14:06:55 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*ft_instr_join(char *str, char *ptr)
{
	char	*out;
	int		i;
	int		len1;
	int		len2;

	if (str == NULL)
	{
		str = (char*)malloc(sizeof(char) * 1);
		str[0] = 0;
	}
	len1 = (int)ft_strlen(str);
	len2 = (int)ft_strlen(ptr);
	i = 0;
	out = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	while (i < len1 + len2)
	{
		out[i] = (i >= len1 ? ptr[i - len1] : str[i]);
		i++;
	}
	out[len1 + len2] = 0;
	free(str);
	return (out);
}

char	*join_input(char *str, char *ptr)
{
	int		len1;
	int		len2;
	int		i;
	char	*out;

	i = 0;
	if (str == NULL)
	{
		str = (char*)malloc(sizeof(char) * 1);
		str[0] = 0;
	}
	len1 = ft_strlen(str);
	len2 = ft_strlen(ptr);
	out = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	while (i < len1 + len2)
	{
		out[i] = (i >= len1 ? ptr[i - len1] : str[i]);
		i++;
	}
	out[len1 + len2] = 0;
	free(str);
	return (out);
}

char	*concat(int argc, char **argv, char *tmp)
{
	int i;

	i = 1;
	while (i < argc)
	{
		tmp = join_input(tmp, argv[i]);
		tmp = join_input(tmp, " ");
		i++;
	}
	return (tmp);
}
