/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:06:33 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/18 16:03:15 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_percent(va_list args, char str);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putpointer(void *p);
int	ft_putnbr(int i);
int	ft_putunsigned(unsigned int u);
int	ft_puthex(unsigned long x, char str);
#endif