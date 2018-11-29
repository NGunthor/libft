/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 23:48:35 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/26 11:48:59 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*outstr;
	int		i;

	i = 0;
	if ((outstr = (char*)malloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	while (s[i])
	{
		outstr[i] = f(i, s[i]);
		i++;
	}
	outstr[i] = '\0';
	return (outstr);
}
