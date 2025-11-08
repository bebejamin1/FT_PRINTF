/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:13:35 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/28 16:15:46 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	// size_t size = 10;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	// char dest[100] = "blablaJ";
// 	// char src[100] = "blablajjj";
// 	int b = ft_strncmp("test\200", "test\0", 6);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\nTaille : %d\n", b);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	// char dest2[100] = "blablaJ";
// 	// char src2[100] = "blablajjj";
// 	int a = strncmp("test\200", "test\0", 6);
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	printf("\nTaille : %d", a);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int c = (a == b) ? 1 : 0;
// 	// int v = 5;
// 	// int i = 0;
// 	// while (dest[i] || dest2[i])
// 	// {
// 	// 	v = (dest[i] - dest2[i] == 0) ? 1 : 0;
// 	// 	if (v == 0)
// 	// 		while (dest[i] || dest2[i])
// 	// 			i++;
// 	// 	i++;
// 	// }
// 	if (c == 0)
// 	{
// 		printf("\n\033[41;01m/!\\Erreur\033[00m");
// 		printf("\n\033[21;01m*Problem : Taille\033[00m");
// 		// if (v == 0)
// 		// {
// 		// 	printf("\n\033[41;01m/!\\Erreur\033[00m");
// 		// 	printf("\n\033[21;01m*Problem : Result\033[00m");
// 		// }
// 		return (0);
// 	}
// 	else
// 		printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// }