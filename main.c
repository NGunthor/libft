/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:52:30 by ngunthor          #+#    #+#             */
/*   Updated: 2018/11/29 14:28:19 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

#include <string.h>
#include <ctype.h>

char		ft_toupperi(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}


int		main()
{
	printf("%s\n", ft_itoa(-2147483648));
}
