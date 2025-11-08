/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:26:48 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/27 17:30:54 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen((const char *)dest);
	j = 0;
	if (size <= i)
		return (size + ft_strlen(src));
	while (j < (size - i - 1) && src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (i + ft_strlen(src));
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	size_t size = 5;
// 	// ********************|Ma Fonction|*******************
// 	//
// 	printf("\nsize %zu\n", size);
// 	// char dest[100]; "aaaa";
// 	// char src[100] = "HAAAA";
// 	size_t b = ft_strlcat("aaaa", "123", 2);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\nTaille : %zu", b);
// 	printf("\nResult : %s\n", dest);
// 	printf("\ndebug : %d\n", dest[1]);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	// char dest2[100]; "aaaa";
// 	// char src2[] = "HAAAA";
// 	size_t a = strlcat("aaaa", "123", 2);
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	printf("\nTaille : %zu", a);
// 	printf("\nResult : %s", dest2);
// 	printf("\ndebug : %d\n", dest2[1]);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int c = (a == b) ? 1 : 0;
// 	int v = 5;
// 	int i = 0;
// 	while (dest[i] || dest2[i])
// 	{
// 		v = (dest[i] - dest2[i] == 0) ? 1 : 0;
// 		if (v == 0)
// 		while (dest[i] || dest2[i])
// 		i++;
// 		i++;
// 	}
// 	if (c == 0 || v == 0)
// 	{
// 		if (c == 0)
// 		{
// 			printf("\n\033[41;01m/!\\Erreur\033[00m");
// 			printf("\n\033[21;01m*Problem : Taille\033[00m");
// 		}
// 		else if (v == 0)
// 		{
// 			printf("\n\033[41;01m/!\\Erreur\033[00m");
// 			printf("\n\033[21;01m*Problem : Result\033[00m");
// 		}
// 		return (printf("aie"));
// 	}
// 	printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// }