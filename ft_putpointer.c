/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:33:40 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/18 19:21:43 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putpointer(void *p)//%p
{
	int	count;

	count = 0;
	if (!p)
		return (write (1, "(nil)", 5));
	count = count + ft_putstr("0x");
	count = count + ft_puthex((unsigned long)p, "0123456789abcdef");
	return (count);
}
