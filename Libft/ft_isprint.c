/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:21:04 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/07 18:00:22 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (16384);
	return (0);
}

// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	int f_test1 = ft_isprint('a');
// 	int f_test2 = ft_isprint('0');
// 	int f_test3 = ft_isprint(300);
// 	int f_test4 = ft_isprint(-300);
// 	printf("\n -1 Result : %d\n", f_test1);
// 	printf("\n -2 Result : %d\n", f_test2);
// 	printf("\n -3 Result : %d\n", f_test3);
// 	printf("\n -4 Result : %d\n", f_test4);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	int v_test1 = isprint('a');
// 	int v_test2 = isprint('9');
// 	int v_test3 = isprint(300);
// 	int v_test4 = isprint(-300);
// 	printf("\n -1 Result : %d\n", v_test1);
// 	printf("\n -2 Result : %d\n", v_test2);
// 	printf("\n -3 Result : %d\n", v_test3);
// 	printf("\n -4 Result : %d\n", v_test4);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int v = 5;
// 	int i = 1;
// 	while (i <= 4)
// 	{
// 		v = (f_test1 - v_test1 == 0) ? 1 : 0;
// 		if (v == 0)
// 			break;
// 		v = (f_test2 - v_test2 == 0) ? 1 : 0;
// 		if (v == 0)
// 			break;
// 		v = (f_test3 - v_test3 == 0) ? 1 : 0;
// 		if (v == 0)
// 			break;
// 		v = (f_test4 - v_test4 == 0) ? 1 : 0;
// 		if (v == 0)
// 			break;
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