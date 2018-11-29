/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:24:57 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/26 13:47:19 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char			*tmp;
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	end = 0;
	start = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	start = i;
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	end = i;
	tmp = ft_strnew(end - start + 1);
	i = 0;
	while (i < end - start)
	{
		tmp[i] = s[start + i];
		i++;
	}
	return (tmp);
}
