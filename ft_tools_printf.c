/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:33:40 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/13 11:31:15 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	for_percent(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	for_char(int c)
{
	write (1, &c, 1);
	return (1);
}

size_t	for_str(char *str)
{
	size_t	size;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	size = 0;
	while (str[size])
		size++;
	write (1, str, size);
	return (size);
}

size_t	for_address(va_list ap)
{
	unsigned long long	ptr;

	ptr = va_arg(ap, unsigned long long);
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (ft_u_putnbr_b(ptr, "0123456789abcdef") + 2);
}
