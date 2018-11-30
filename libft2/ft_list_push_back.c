/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:49:12 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/30 12:57:22 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, t_list *elem)
{
	t_list now_pos;

	if (!elem || !begin_list)
		return ;
	if (*begin_list == NULL)
		*begin_list = elem;
	else
	{
		now_pos = *begin_list;
		while (now_pos->next)
			now_pos = now_pos->next;
		now_pos->next = elem;
	}
}
