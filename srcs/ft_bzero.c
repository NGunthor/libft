/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:51:55 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/22 14:22:08 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ch;

	if (!n)
		return ;
	ch = s;
	while (n--)
		*(ch + n) = 0;
}
