/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 09:15:57 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/06 08:25:55 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	result;

	i = 0;
	signe = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + nptr[i] - '0';
		i++;
	}
	return (result * signe);
}

// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char dest1[100] = "    \n\t\r			2147483647";
// 	char dest2[100] = "    \n\t\r			-2147483648";
// 	char dest3[100] = "    \n\t\r			+214748e3648";
// 	int a = ft_atoi(dest1);
// 	int b = ft_atoi(dest2);
// 	int c = ft_atoi(dest3);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\nTaille : %i", a);
// 	printf("\nTaille : %i", b);
// 	printf("\nTaille : %i", c);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	char dest1_1[100] = "    \n\t\r			2147483647";
// 	char dest1_2[100] = "    \n\t\r			-2147483648";
// 	char dest1_3[100] = "    \n\t\r			+214748e3648";
// 	int d = atoi(dest1_1);
// 	int e = ft_atoi(dest1_2);
// 	int f = ft_atoi(dest1_3);
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	printf("\nTaille : %i", d);
// 	printf("\nTaille : %i", e);
// 	printf("\nTaille : %i", f);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int z = (a == d) ? 1 : 0;
// 	int x = (b == e) ? 1 : 0;
// 	int w = (c == f) ? 1 : 0;
// 	if (z == 0 || x == 0 || w == 0)
// 	{
// 		printf("\n\033[41;01m/!\\Erreur\033[00m");
// 		printf("\n\033[21;01m*Problem : Taille\033[00m");
// 	}
// 	else
// 		printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// }