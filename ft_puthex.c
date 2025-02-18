/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:37:43 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/18 18:59:37 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_puthex(unsigned long x, char *base)//%x%X
{
	int		count;

	count = 0;
	if (x >= 16)
		count = count + ft_puthex(x / 16, base);
	count = count + ft_putchar(base[x % 16]);
	return (count);
}
