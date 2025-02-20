/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:06:37 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/20 18:31:54 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		count;

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
			count = count + ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
/*
int main (void)
{
	int n = -2147483649;
	char c = 'a';
	char *s= NULL;
	
	printf("%d , %s , %c , %x , %X , %p , %u \n", n, s, c, n, n, s, n);
	ft_printf("%d , %s , %c , %x , %X , %p , %u \n", n, s, c, n, n, s, n);
	
	
}*/