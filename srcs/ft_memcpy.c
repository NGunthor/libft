/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:54:42 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/22 14:09:49 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destination;

	source = src;
	destination = dest;
	while (n--)
		*(destination + n) = *(source + n);
	return (dest);
}
