/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:25:15 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/11 16:59:24 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	size_t	nb;
	char		number;
	size_t	nbr_base;

	nbr_base = ft_strlen(base);
	nb = nbr;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nb > nbr_base)
	{
		ft_putnbr_base((nbr / nbr_base), base);
		// ft_putnbr_base((nbr % nbr_base), base);
	}
	else
	{
		number = base[nb];
		write(1, &number, 1);
	}
}

int main(void)
{
	ft_putnbr_base(16, "0123456789ABCDEF");
}