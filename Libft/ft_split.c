/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 07:47:51 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/05 13:17:11 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char *s, char c)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nb++;
		i++;
	}
	return (nb);
}

static char	*ft_start_end_str(char *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (end - start) + 2);
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_malloc_string(char **string, char *s, char c)
{
	int	tab;
	int	end;
	int	start;

	tab = 0;
	end = 0;
	start = 0;
	while (s[end] != '\0')
	{
		while (s[start] == c)
			start++;
		if (s[end] != c && (s[end + 1] == c || s[end + 1] == '\0'))
		{
			string[tab] = ft_start_end_str(s, start, end);
			start = end + 1;
			tab++;
		}
		end++;
	}
	string[tab] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		nb;
	char	**string;

	nb = ft_countword((char *)s, c);
	string = malloc(sizeof(char *) * (nb + 1));
	if (!string)
		return (NULL);
	ft_malloc_string(string, (char *)s, c);
	return (string);
}

// int main(void)
// {
// 	char *str = ",JAN,FEB,MAR,APR,,,,,,,,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC,";
// 	char **string = ft_split(str, ',');
// 	int i = 0;
// 	int j = 0;
// 	while (string[i])
// 	{
// 		j = 0;
// 		while (string[i][j])
// 		{
// 			printf("%c", string[i][j]);
// 			j++;
// 		}
// 		free(string[i]);
// 		printf("\n");
// 		i++;
// 	}
// 	free(string);
// 	return (0);
// }