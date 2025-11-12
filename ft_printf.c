/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:26:53 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/12 14:48:49 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	check_format(char format, va_list ap)
{
	size_t	lenght;

	lenght = 0;
	if (format == 'c')
		lenght = for_char(va_arg(ap, int), lenght);
	else if (format == 's')
		lenght = for_str(va_arg(ap, char *), lenght);
	else if (format == 'p')
		lenght = for_address(ap, lenght);
	else if (format == 'd' || format == 'i')
		lenght = ft_putnbr_base(va_arg(ap, int), "0123456789");
	else if (format == 'u')
		lenght = ft_unsigned_putnbr_base(va_arg(ap, unsigned int), "0123456789");
	else if (format == 'x')
		lenght = ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	else if (format == 'X')
		lenght = ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	return (lenght);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		lenght;

	i = 0;
	lenght = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			lenght = check_format(format[++i], ap);
			i++;
		}
		if (format[i] == '%' && format[i + 1] == '%')
			i++;
		write(1, &format[i], 1);
		i++;
	}
	return (lenght);
}

// int	main(void)
// {
// 	char *str = "coucou";
// 	ft_printf("Begin 10 %p End\n", &str);
// 	printf("\nBegin 10 %p End\n", &str);
// }