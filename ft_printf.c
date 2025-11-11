/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:26:53 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/10 15:20:29 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argument_pointer;
	size_t	character;
	char	currentchar;
	size_t	i;
	
	va_start(argument_pointer, format);
	character = 0;
	i = 0;
	while ((currentchar == format[i]) != '\0')
	{
		i++;
		if (currentchar != '%')
		{
			ft_putchar(currentchar);
			character++;
		}
		
	}

	va_end(argument_pointer);
}

int	main(void)
{
	ft_printf( "Begin %s End\n", "Middle" );
}