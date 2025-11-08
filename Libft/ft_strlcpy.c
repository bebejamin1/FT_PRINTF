/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:31:05 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/28 16:15:48 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;
	if (size == 0)
		return (lenght);
	i = 0;
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lenght);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[100] = "bmx";
// 	char src[100] = "vtt";
// 	printf("%zu", ft_strlcpy(dest, src, 3));
// 	printf("\n%s", dest);
// 	char dest2[100] = "bmx";
// 	char src2[100] = "vtt";
// 	printf("\n%zu", strlcpy(dest2, src2, 3));
// 	printf("\n%s", dest2);
// }