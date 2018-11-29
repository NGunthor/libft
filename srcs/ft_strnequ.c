/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 12:00:18 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/26 12:47:28 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return (s1[i] == s2[i]);
	return (1);
}
