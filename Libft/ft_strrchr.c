/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:52:42 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/30 15:27:36 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		lenght;
	char	*ptr;

	ptr = (char *)s;
	lenght = ft_strlen(s);
	while (lenght >= 0)
	{
		if ((char)c == ptr[lenght])
			return ((char *)&ptr[lenght]);
		lenght--;
	}
	return (NULL);
}

// #include <stdio.h>
// // #include <string.h>
// int main(void)
// {
// 	int size = '\0';
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char dest[100] = "";
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	char *str = ft_strrchr(dest, size);
// 	printf("\nResult : %s\n", str);
// 	//
// 	// **************++******|La Fonction|********************
// 	//
// 	char dest2[100] = "";
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	char *str2 = strrchr(dest2, size);
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
// 	}