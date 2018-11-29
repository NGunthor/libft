/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:01:16 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/29 14:24:34 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//#include "libft.h"

int		nbrlen(int n)
{
	int length;

	length = 0;
	if (n <= 0)
		length++;
	while (n > 0)
	{
		n/=10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*out;
	int		length;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	length = nbrlen(n);
	out = ft_strnew(length);
	if (out == NULL)
		return (NULL);
	out[0] = '0';
	if (n < 0)
		out[0] = '-';
	ft_abs(n);
	while (n > 0)
	{
		out[--length] = n % 10 + '0';
		n = n / 10;
	}
	return (out);
}
