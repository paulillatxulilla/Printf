/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:21:31 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/16 18:35:18 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int u)//%u
{
	if (u == 2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	if (u >= 10)
	{
		ft_putnbr(u / 10);
		ft_putnbr(u % 10);
	}
	else
		ft_putchar(u + '0');
	return (write(1, u, 11));
}