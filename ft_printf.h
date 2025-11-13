/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:29:37 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/13 11:30:50 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <bsd/string.h>
# include <stdio.h>
# include <limits.h>

size_t	check_format(char format, va_list ap);
int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *s);
int		ft_u_putnbr_b(unsigned long long nbr, char *base);
int		ft_putnbr_base(int nb, char *base);
size_t	for_char(int c);
size_t	for_str(char *str);
size_t	for_address(va_list ap);
size_t	for_percent(char c);

#endif