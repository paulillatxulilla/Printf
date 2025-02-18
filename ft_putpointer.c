/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:33:40 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/18 16:03:40 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

int	ft_putpointer(void *p)
{
	char	*base;

	base = "0123456789abcdef";
	if (p >= 16)
		ft_putpointer((int )p / 16);
	ft_putchar(base[(int )p % 16]);
	return (write(1, p, ft_strlen(p)));
}
