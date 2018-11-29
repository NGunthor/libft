/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 23:22:35 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/25 23:46:33 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*outstr;
	int		i;

	i = 0;
	if ((outstr = (char*)malloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	while (s[i])
	{
		outstr[i] = f(s[i]);
		i++;
	}
	outstr[i] = '\0';
	return (outstr);
}
