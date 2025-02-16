/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:06:37 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/16 19:20:11 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(char const *str, ...)
{
	int i;
	va_list args;
	
	va_start(args, str);
	i = 0;
	if (str[i] != '/0')
		i++;
	while (*str)
		str++;
		if (str == '%')
		{
			str++;
			ft_percent(args, *str);
		}
	va_end(args);
	return (i);
}
