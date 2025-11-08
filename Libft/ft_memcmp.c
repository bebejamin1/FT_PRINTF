/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:47:59 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/28 14:22:47 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i] && (str1[i] > str2[i]))
			return (1);
		if (str1[i] != str2[i] && (str1[i] < str2[i]))
			return (-1);
		i++;
	}
	return (0);
}

// #include <bsd/string.h>
// int main(void)
// {
// 	// size_t size = 1;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	// char dest[100] = "blablaj";
// 	// char src[100] = "blablaJJJ";
// 	int b = ft_memcmp("t\200", "t\0", 2);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\nTaille : %d\n", b);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	// char dest2[100] = "blablaj";
// 	// char src2[100] = "blablaJJJ";
// 	int a = memcmp("t\200", "t\0", 2);
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	printf("\nTaille : %d", a);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int c = (a == b) ? 1 : 0;
// 		if (c == 0)
// 		{
// 			printf("\n\033[41;01m/!\\Erreur\033[00m");
// 			printf("\n\033[21;01m*Problem : Taille\033[00m");
// 			return (0);
// 		}
// 		else
// 			printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// }