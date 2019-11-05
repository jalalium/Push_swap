/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_only.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:49:22 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 17:06:06 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

char	*three_only(t_pile **a, char *str)
{
	if ((*a)->sup_p == 0 && (*a)->next->sup_p == 2
			&& (*a)->next->next->sup_p == 1)
		return (three_only_acb(a, str));
	else if ((*a)->sup_p == 1 && (*a)->next->sup_p == 0
			&& (*a)->next->next->sup_p == 2)
		return (three_only_bac(a, str));
	else if ((*a)->sup_p == 1 && (*a)->next->sup_p == 2
			&& (*a)->next->next->sup_p == 0)
		return (three_only_bca(a, str));
	else if ((*a)->sup_p == 2 && (*a)->next->sup_p == 0
			&& (*a)->next->next->sup_p == 1)
		return (three_only_cab(a, str));
	else if ((*a)->sup_p == 2 && (*a)->next->sup_p == 1
			&& (*a)->next->next->sup_p == 0)
		return (three_only_cba(a, str));
	else
		return (str);
}
