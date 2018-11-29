/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:00:22 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/24 14:08:27 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*oneedle;
	size_t		n;

	n = len;
	oneedle = needle;
	while (*haystack)
	{
		if (*haystack == *needle || *needle == '\0')
		{
			while (*haystack == *needle || *needle == '\0' || n == 0)
			{
				if (*needle == '\0' || n == 0)
					return ((char*)(haystack - len));
				haystack++;
				needle++;
				n--;
			}
			haystack--;
			n = len;
			needle = oneedle;
		}
		haystack++;
	}
	return (NULL);
}
