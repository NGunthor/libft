/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:12:57 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/29 14:23:14 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//#include "libft.h"

unsigned int	ft_abs(int n)
{
	if (n == INT_MIN)
		return (2147483648);
	if (n >= 0)
		return (n);
	else
		return (-n);
}
