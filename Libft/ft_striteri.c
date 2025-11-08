/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:30:15 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/30 13:44:35 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_trolilool(unsigned int i, char *s)
// {
// 	if (*s >= 'a' && *s <= 'z')
// 		*s -= 32;
// 	else if (*s >= 'A' && *s <= 'Z')
// 		*s += 32;
// 	else
// 		*s += i;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int main(void)
// {
// 	char s[100] = "ben123_";

// 	printf("%s\n", s);
// 	ft_striteri(s, ft_trolilool);
// 	printf("\nstr = %s", s);
// }