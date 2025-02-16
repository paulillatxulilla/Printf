/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:53:47 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/16 17:47:57 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

static int  ft_strlen(char *str)
{
    int len;
	
	len = 0;
	if(!str)
		return (0);
    while (str[len])
        len++;
    return (len);
}

int	ft_putstr(char *str)//%s
{
	if (!str)
		str = "(null)";
	return (write (1, str, ft_strlen(str)));
}

int	main ()
{
	ft_putstr("holaaaa");
	return (0);
}