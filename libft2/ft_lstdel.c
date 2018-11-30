/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:32:23 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/30 12:57:48 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	t_list *temp;

	if (!alst || !(*alst) || !del)
		return ;
	next = *alst;
	while (next)
	{
		temp = next;
		next = temp->next;
		del(temp->content, temp->content_size);
		free(temp);
	}
	*alst = NULL;
}
