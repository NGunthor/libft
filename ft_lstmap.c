/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:24:21 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/30 18:21:29 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freelst(void *content, size_t content_size)
{
	free(content);
	content_size = 0;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *headlst;

	if (!lst || !f)
		return (NULL);
	headlst = NULL;
	while (lst != NULL)
	{
		temp = f(lst);
		if (temp == NULL)
		{
			ft_lstdel(&headlst, &freelst);
			return (NULL);
		}
		ft_list_push_back(&headlst, temp);
		lst = lst->next;
	}
	return (headlst);
}
