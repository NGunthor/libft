/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:37:47 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/22 14:14:43 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ch;

	ch = b;
	while (len--)
		*(ch + len) = (unsigned char)c;
	return (b);
}
