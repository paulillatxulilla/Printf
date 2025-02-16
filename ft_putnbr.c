/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:01:09 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/16 18:15:14 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

static int  ft_strlen(char *str)
{
    int len;
	
	len = 0;
	if(!str)
		return (NULL);
    while (str[len])
        len++;
    return (len);
}

int	ft_putnbr(int i)//%i %d
{
	if (i == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
	return (write(1, i, ft_strlen(i)));
}