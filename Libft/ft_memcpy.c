/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:45:41 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/07 10:35:48 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				i;

	i = 0;
	dest2 = dest;
	src2 = src;
	if (!dest2 && !src2)
		return (0);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char src[100] = "blablabla";
// 	char dest[100] = "";
// 	ft_memcpy(dest, src, 5);
// 	printf("%s", dest);
// }