/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:32:42 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/23 19:47:47 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*to_end(const char *str)
{
	while (*str)
		str++;
	return ((char*)(str-1));
}

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = to_end(s);
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	return (NULL);
}
