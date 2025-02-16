/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:37:43 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/16 19:08:50 by padan-pe         ###   ########.fr       */
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

int ft_puthex(unsigned long x, char str)
{
    char *base;

    if (str = 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    if (x >= 16)
        ft_puthex(x / 16, str);
       ft_putchar(base[x % 16]);
    return (write(1, x, ft_strlen(x)));
}