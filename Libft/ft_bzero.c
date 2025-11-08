/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:47:23 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/06 09:37:29 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = pointer;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main(void)
// {
// 	char dest[100] = "abcdefghijklmnopqrstuvwxyz";
// 	printf("\nChaine de base = %s\n", dest);
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m\n");
// 	char	*ft_dest1 = dest;
// 	char	*ft_dest2 = dest;
// 	char	*ft_dest3 = dest;
// 	ft_bzero(ft_dest1, 5);
// 	printf("Chaine 1 = %s\n", ft_dest1);
// 	ft_bzero(ft_dest2, 0);
// 	printf("Chaine 2 = %s\n", ft_dest2);
// 	ft_bzero(ft_dest3, 26);
// 	printf("Chaine 3 = %s\n", ft_dest3);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m\n");
// 	char	*libc_dest1 = dest;
// 	char	*libc_dest2 = dest;
// 	char	*libc_dest3 = dest;
// 	bzero(libc_dest1, 5);
// 	printf("Chaine 1 = %s\n", libc_dest1);
// 	bzero(libc_dest2, 1);
// 	printf("Chaine 2 = %s\n", libc_dest2);
// 	bzero(libc_dest3, 26);
// 	printf("Chaine 3 = %s\n", libc_dest3);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int z = (memcmp(ft_dest1, libc_dest1, 100) == 0) ? 1 : 0;
// 	int x = (memcmp(ft_dest2, libc_dest2, 100) == 0) ? 1 : 0;
// 	int w = (memcmp(ft_dest3, libc_dest3, 100) == 0) ? 1 : 0;
// 	if (z == 0 || x == 0 || w == 0)
// 	{
// 		printf("\n\033[41;01m/!\\Erreur\033[00m");
// 		if (z == 0) printf("\n\033[21;01m*Problem\033[00m");
// 		if (x == 0) printf("\n\033[21;01m*Problem\033[00m");
// 		if (w == 0) printf("\n\033[21;01m*Problem\033[00m");
// 	}
// 	else
// 		printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// }