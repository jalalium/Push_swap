/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 13:37:06 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/16 15:46:08 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	t_list *current;

	if (!lst)
		return ;
	current = lst;
	while (current->next != NULL)
	{
		f(current);
		current = current->next;
	}
	f(current);
}
