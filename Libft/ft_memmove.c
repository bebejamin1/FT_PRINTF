/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 07:07:33 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/07 13:30:55 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	unsigned char		*src2;
	size_t				i;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > i)
		{
			dest2[n - 1] = src2[n - 1];
			n--;
		}
		return (dest2);
	}
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
// int		main(void)
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	char	*dest2;
// 	dest = src + 1;
// 	dest2 = src + 1;
// 		ft_memmove(dest, "consectetur", 5);
// 		memmove(dest2, "consectetur", 5);
// 		printf("\nla fonction : %s\n", dest2);
// 		printf("\nma fonction : %s\n", dest);
// }
