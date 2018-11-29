/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:23:16 by anonymou          #+#    #+#             */
/*   Updated: 2018/11/26 15:53:50 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(int n)
{
	int nbr;
	nbr = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		nbr = n * 10 + n % 10;
		n = n / 10;
	}
	while (nbr > 0)
	{
		ft_putchar(nbr % 10 + '0');
		nbr = nbr / 10;
	}
}
