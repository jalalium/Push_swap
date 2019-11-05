/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_revisited.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 18:35:40 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/19 21:36:16 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int		ft_countdigit(int *tab, int size, int n)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (tab[i] == n)
			count++;
		i++;
	}
	return (count);
}

static	void	ft_filltab(char const *s, int *tab, char c, int black)
{
	int word;
	int i;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (black == 0)
				black = 1;
			tab[i] = 0;
		}
		else
		{
			if (black == 1)
			{
				black = 0;
				word++;
			}
			tab[i] = word;
		}
		i++;
	}
	tab[i] = word + 1;
}

static	int		**ft_tab(char const *s, char c)
{
	int **out;
	int j;
	int ls;

	j = 1;
	out = (int**)malloc(sizeof(int*) * 2);
	if (!out)
		return (NULL);
	ls = (int)ft_strlen(s);
	out[0] = (int*)malloc(sizeof(int) * (ls + 1));
	if (!(out[0]))
		return (NULL);
	ft_filltab(s, out[0], c, 1);
	out[1] = (int*)malloc(sizeof(int) * (out[0][ls]));
	if (!(out[1]))
		return (NULL);
	out[1][0] = out[0][ls] - 1;
	while (j < out[1][0] + 1)
	{
		out[1][j] = ft_countdigit(out[1], ls, j);
		j++;
	}
	return (out);
}

static	void	ft_fillstring(char const *s, char c, char *str, int j)
{
	int i;
	int off;

	i = 0;
	while (ft_tab(s, c)[0][i] != j + 1)
		i++;
	off = i;
	while (ft_tab(s, c)[0][i] == j + 1)
	{
		str[i - off] = s[i];
		i++;
	}
	str[i - off] = '\0';
}

char			**ft_strsplit(char const *s, char c)
{
	char	**out;
	int		words;
	int		j;

	if (!s)
		return (NULL);
	if (!ft_tab(s, c))
		return (NULL);
	words = ft_tab(s, c)[1][0];
	out = (char**)malloc(sizeof(char*) * words);
	if (!out)
		return (NULL);
	j = 0;
	while (j < words)
	{
		out[j] = (char*)malloc(sizeof(char) * ft_tab(s, c)[1][j + 1]);
		if (!out[j])
			return (NULL);
		ft_fillstring(s, c, out[j], j);
		j++;
	}
	out[j] = NULL;
	return (out);
}
