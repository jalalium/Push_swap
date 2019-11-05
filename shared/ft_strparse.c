/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strparse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 20:25:19 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/14 21:48:57 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int		count_words(char *str, char c)
{
	int start;
	int end;
	int len;
	int i;
	int out;

	len = (int)strlen(str);
	start = front_sp(str, c);
	end = back_sp(str, c, len);
	out = 1;
	if (start == len)
		return (0);
	i = start;
	while (i < len - end - 1)
	{
		if (str[i] != c && str[i + 1] == c)
			out++;
		i++;
	}
	return (out);
}

void	ft_strcopy(char **sr, char *ptr, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = *sr;
	while (i < len)
	{
		str[i] = ptr[i];
		i++;
	}
	str[len] = '\0';
	sr = &str;
}

char	**ft_strparse(char *str, char c)
{
	int		i;
	int		j;
	int		words;
	int		temp;
	char	**out;

	i = 0;
	j = 0;
	words = count_words(str, c);
	out = (char**)malloc(sizeof(char*) * words + 1);
	while (j < words)
	{
		while (str[i] == c)
			i++;
		temp = ft_ptrchr(str + i, c);
		out[j] = (char*)malloc(sizeof(char) * temp);
		ft_strcopy(&(out[j]), str + i, temp);
		i += temp;
		if (j == words - 1)
			out[j + 1] = NULL;
		j++;
	}
	return (out);
}
