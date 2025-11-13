/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:26:53 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/13 11:36:05 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	check_format(char format, va_list ap)
{
	size_t	length;

	length = 0;
	if (format == '%')
		length = for_percent('%');
	else if (format == 'c')
		length = (for_char(va_arg(ap, int)));
	else if (format == 's')
		length = (for_str(va_arg(ap, char *)));
	else if (format == 'p')
		length = (for_address(ap));
	else if (format == 'd' || format == 'i')
		length = (ft_putnbr_base(va_arg(ap, int), "0123456789"));
	else if (format == 'u')
		length = (ft_u_putnbr_b(va_arg(ap, unsigned int), "0123456789"));
	else if (format == 'x')
		length = (ft_u_putnbr_b(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		length = (ft_u_putnbr_b(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			count = count + check_format(format[++i], ap);
			i++;
		}
		else
		{
			write(1, &format[i++], 1);
			count++;
		}
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	ft_printf("x%%x");
// 	printf("\n");	
// 	printf("x%%x");
// }