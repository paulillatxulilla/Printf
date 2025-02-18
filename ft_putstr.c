/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:53:47 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/18 19:10:12 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putstr(char *str)//%s
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		count = count + ft_putchar(*str);
		str++;
	}
	return (count);
}
