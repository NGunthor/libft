/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:09:47 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/30 12:18:14 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *out;

	out = (t_list*)malloc(sizeof(t_list));
	if (out == NULL)
		return (NULL);
	if (content == NULL)
	{
		out->content = NULL;
		out->content_size = 0;
	}
	else
	{
		out->content = (unsigned char*)malloc(content_size);
		if (out->content == NULL)
		{
			free(out);
			return (NULL);
		}
		out->content_size = content_size;
		ft_memmove(out->content, content, content_size);
	}
	out->next = NULL;
	return (out);
}
