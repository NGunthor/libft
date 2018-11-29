/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:48:13 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/24 13:57:16 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*oneedle;

	oneedle = needle;
	while (*haystack)
	{
		if (*haystack == *needle || *needle == '\0')
		{
			while (*haystack == *needle || *needle == '\0')
			{
				if (*needle == '\0')
					return ((char*)haystack - ft_strlen(oneedle));
				haystack++;
				needle++;
			}
			haystack--;
			needle = oneedle;
		}
		haystack++;
	}
	return (NULL);
}
