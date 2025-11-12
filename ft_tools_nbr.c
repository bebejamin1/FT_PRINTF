/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:25:15 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/12 14:45:57 by bbeaurai         ###   ########.fr       */
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

int	ft_unsigned_putnbr_base(unsigned long long nbr, char *base)
{
	size_t	nbr_base;
	int		count;

	nbr_base = ft_strlen(base);
	count = 0;
	if (nbr >= nbr_base)
	{
		count += ft_unsigned_putnbr_base((nbr / nbr_base), base);
	}
		nbr = nbr % nbr_base;
		count++;
		write(1, &base[nbr], 1);
		return (count);
}

int	ft_putnbr_base(int nbr, char *base)
{
	size_t	nb;
	size_t	nbr_base;
	int		count;

	nb = nbr;
	nbr_base = ft_strlen(base);
	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		count++;
	}
	if (nb >= nbr_base)
	{
		count += ft_putnbr_base((nbr / nbr_base), base);
	}
		nb = nb % nbr_base;
		count++;
		write(1, &base[nb], 1);
		return (count);
}

// int main(void)
// {
// 	printf("%d\n", ft_putnbr_base(-5000, "0123456789ABCDEF"));
// 	ft_putnbr_base(-5000, "0123456789ABCDEF");
// }