/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:21:15 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/20 15:58:13 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int size = 122;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	// printf("\nsize %zu\n", size);
// 	// char dest[100] = "123456879";
// 	// char src[100] = "blabla";
// 	int b = ft_toupper(size);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\nTaille : %d\n", b);
// 	// printf("\nResult : %s\n", dest);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	// char dest2[100] = "123456879";
// 	// char src2[100] = "blabla";
// 	int a = toupper(size);
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	printf("\nTaille : %d\n", a);
// 	// printf("\nResult : %s", dest2);
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
// 		// return (0);
// 	}
// 	else
// 		printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// 	}