/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:21:31 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/18 18:37:14 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int u)//%u
{
	int count;

	count = 0;
	if (u >= 10)
		count = count + ft_putnbr(u / 10);
	count = count + ft_putchar((u % 10) + 48);
	return (count);
}
