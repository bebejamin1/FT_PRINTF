/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:59:52 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/07 13:48:37 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*error(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 && s2)
	{
		str = ft_strdup(s2);
		return (str);
	}
	else if (!s2 && s1)
	{
		str = ft_strdup(s1);
		return (str);
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (error(s1, s2));
	str1 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str1[i] = s2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	// char	s1[] = "lorem ipsum";
// 	// char	s2[] = "dolor sit amet";
// 	// s2[0] = '\0';
// 	char *a = ft_strjoin(NULL, NULL);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\n\nResult : %s\n", a);
// 	free (a);
// }