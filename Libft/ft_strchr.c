/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:41:15 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/30 15:26:29 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] != (char)c && ptr[i])
		i++;
	if (ptr[i] == (char)c)
		return (&ptr[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	int size = 't' + 256;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char dest[] = "tripouille";
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	char *str = ft_strchr(dest, size);
// 	printf("\nResult : %s\n", str);
// 	//
// 	// **************++******|La Fonction|********************
// 	//
// 	char dest2[] = "tripouille";
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	char *str2 = strchr(dest2, size);
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