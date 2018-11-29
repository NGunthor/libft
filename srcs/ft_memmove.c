/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:10:16 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/22 15:20:02 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*temp;
	size_t			tsize;

	if (!(temp = (unsigned char *)malloc(len)))
		return (NULL);
	tsize = len;
	d = dst;
	s = src;
	while (tsize--)
		*(temp + tsize) = *(s + tsize);
	while (len--)
		*(d + len) = *(temp + len);
	return (dst);
}
