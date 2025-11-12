/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:29:37 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/12 14:46:08 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "Libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
int		ft_putnbr_base(int nb, char *base);
int	ft_unsigned_putnbr_base(unsigned long long nbr, char *base);
size_t	ft_strlen(const char *s);
int		ft_count(int n);
size_t	for_char(int c, size_t size);
size_t	for_str(char *str, size_t size);
size_t	for_address(va_list ap, size_t size);

#endif