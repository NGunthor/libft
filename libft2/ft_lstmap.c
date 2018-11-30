/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:58:24 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/30 13:24:43 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	freelst(void *content, size_t content_size)
{
	free(content);
	content_size = 0;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *newlst;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	while (lst != NULL)
	{
		tmp = f(lst);
		if (tmp == NULL)
		{
			ft_lstdel(newlist, freelst);
			return (NULL);
		}
		ft_list_push_back(&newlist, tmp);
		lst = lst->next;
	}
	return (newlist);
}
