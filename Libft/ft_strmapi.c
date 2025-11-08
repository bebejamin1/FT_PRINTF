/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:09:11 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/30 13:44:12 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	ft_trolilool(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c = c - 32);
// 	if (c >= 'A' && c <= 'Z')
// 		return (c = c + 32);
// 	return (c = c + i);
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *str = ft_strmapi("ben123_", ft_trolilool);
// 	printf("\nstr = %s", str);
// }