/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:26:55 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/16 19:13:31 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_percent(va_list args, char str)
{
    if (str == 'c')
		return (ft_putchar(va_arg(args, char)));
	if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
    if (str == 'p')
        return ;
	if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
    if (str == 'X' || str == 'x')
        return (ft_puthex(va_arg(args, unsigned long)));
	if (str == '%')
		return (ft_putchar('%'));
    return (0);
}