/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:33:40 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/12 14:46:26 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	for_char(int c, size_t size)
{
	size = 1;
	write (1, &c, 1);
	return (size);
}

size_t	for_str(char *str, size_t size)
{
	size = 0;
	while (str[size])
		size++;
	write (1, str, size);
	return (size);
}

size_t	for_address(va_list ap, size_t size)
{
	write(1, "0x", 2);
	size = ft_unsigned_putnbr_base(va_arg(ap, unsigned long long), "0123456789abcdef") + 2;
	return(size);
}