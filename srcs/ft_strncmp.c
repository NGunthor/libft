/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:37:41 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/24 14:42:52 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && n > 1)
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}
