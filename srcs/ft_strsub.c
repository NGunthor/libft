/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:36:09 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/26 12:52:21 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*out;
	unsigned int	outlen;

	if (!s)
		return (NULL);
	if (!(out = (char*)malloc(len + 1)))
		return (NULL);
	i = 0;
	outlen = len + start;
	while (s[start] && start < outlen)
	{
		out[i] = s[start];
		start++;
		i++;
	}
	out[i] = '\0';
	return (out);
}
