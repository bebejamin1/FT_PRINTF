/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:47:29 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/07 09:13:45 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t count, size_t size)
{
	void	*pointer;

	if (size == 0 || count == 0)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_memset(pointer, 0, (count * size));
	return (pointer);
}

// int main(void)
// {
// 	size_t elementCount = SIZE_MAX;
// 	size_t size = sizeof(int);
// 	int *pointer = (int *) calloc(elementCount, size);
// 	int *pointer2 = (int *) ft_calloc(elementCount, size);
// 	size_t i;
// 	i = 0;
// 	printf("\nAvant - Vrai Fonction\n");
// 	while (i < elementCount)
// 	{
// 		printf( "%d ", pointer[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\nAvant - Ma Fonction\n");
// 	while (i < elementCount)
// 	{
// 		printf( "%d ", pointer2[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < elementCount)
// 	{
// 		pointer[i] = i;
// 		pointer2[i] = i;
// 		i++;
// 	}
// 	printf("\nApres - Ma Fonction\n");
// 	i = 0;
// 	while (i < elementCount)
// 	{
// 		printf( "%d ", pointer[i]);
// 		i++;
// 	}
// 	printf("\nApres - Ma Fonction\n");
// 	i = 0;
// 	while (i < elementCount)
// 	{
// 		printf( "%d ", pointer2[i]);
// 		i++;
// 	}
// 	free(pointer);
// 	free(pointer2);
// }