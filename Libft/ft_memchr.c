/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:27:40 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/30 16:11:23 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	i = 0;
	str = (unsigned char *)s;
	character = c;
	while (i < n)
	{
		if (str[i] == character)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	// int size = 2;
// 	size_t n = 2;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char src[100] = "bonjourno";
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	char *str = ft_memchr(src, 'n', n);
// 	printf("\nResult : %s\n", str);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	char src2[100] = "bonjourno";
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	char *str2 = memchr(src2, 'n', n);
// 	printf("\nResult : %s", str2);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int v = 5;
// 	int i = 0;
// 	while (str[i] || str2[i])
// 	{
// 		v = (str[i] - str2[i] == 0) ? 1 : 0;
// 		if (v == 0)
// 			while (str[i] || str2[i])
// 				i++;
// 		i++;
// 	}
// 	if (v == 0)
// 	{
// 		printf("\n\033[41;01m/!\\Erreur\033[00m");
// 		printf("\n\033[21;01m*Problem : Result\033[00m");
// 		return (0);
// 	}
// 	else
// 		printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// }