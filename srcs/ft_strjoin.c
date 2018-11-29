/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:05:46 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/26 13:22:26 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i;

	if(!(out = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	printf("%zu\n", ft_strlen(s1));
	printf("%zu\n", ft_strlen(s2));
	i = 0;
	while (*s1)
	{
		out[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		out[i] = *s2;
		i++;
		s2++;
	}
	out[i] = '\0';
	return (out);
}
