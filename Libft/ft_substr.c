/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:14:53 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/30 18:05:21 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			lenght;

	i = 0;
	lenght = len + start;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	else if ((ft_strlen(s) - start) < len)
		str = malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	else
		str = malloc(sizeof(char) * (len) + 1);
	if (!str)
		return (NULL);
	while (s[start] && start < lenght)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	unsigned int start = 5;
// 	size_t len = 200;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	// printf("\nstart %u\n", start);
// 	char str[100] = "0123456789";
// 	char *a = ft_substr(str, 9, 10);
// 	// printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	// printf("\n\nResult : %s\n", a);
// 	free (a);
// }