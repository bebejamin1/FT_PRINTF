/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:44:45 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/28 10:43:21 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*dest;
	char	*src2;
	int		i;

	i = 0;
	src2 = (char *)source;
	dest = malloc(sizeof(char) * ft_strlen(source) + 1);
	if (!dest)
		return (NULL);
	while (source[i])
	{
		dest[i] = src2[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <bsd/string.h>
// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char src[100] = "";
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	char *str = ft_strdup(src);
// 	printf("\nResult : %s\n", str);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	char src2[100] = "";
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	char *str2 = strdup(src2);
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
// 	free (str);
// 	free (str2);
// }