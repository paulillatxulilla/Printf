/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:06:37 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/18 17:27:35 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int 	count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count = count + ft_percent(args, *str);
		}
		else
			count = count + ft_putchar(*str);//putchar = write, sumas el valor que write devuleve
		count++;
	}
	va_end(args);
	return (count);
}
