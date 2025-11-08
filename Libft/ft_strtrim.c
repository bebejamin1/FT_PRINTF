/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:20:35 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/31 08:45:30 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkleft(char *str, char *check)
{
	int	i;
	int	j;
	int	count;
	int	loop;

	i = 0;
	j = 0;
	count = 0;
	loop = ft_strlen(str);
	while (loop > 0)
	{
		j = 0;
		while (check[j])
		{
			if (str[i] == check[j])
			{
				i++;
				count++;
			}
			j++;
		}
		loop--;
	}
	return (count);
}

static int	ft_checkright(char *str, char *check)
{
	int		i;
	int		j;
	int		count;
	int		loop;

	i = ft_strlen(str);
	j = ft_strlen(check);
	count = i;
	loop = i;
	while (loop >= 0 && i > ft_checkleft(str, check))
	{
		j = ft_strlen(check);
		while (j >= 0)
		{
			if (str[i] == check[j])
			{
				i--;
				count--;
			}
			j--;
		}
		loop--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		a;
	int		z;
	int		i;

	i = 0;
	a = ft_checkleft((char *)s1, (char *)set);
	z = ft_checkright((char *)s1, (char *)set) + 1;
	if (z - a == 1 && s1[a] == '\0')
		str = malloc(sizeof(char) * (z - a));
	else
		str = malloc(sizeof(char) * (z - a) + 1);
	if (!str)
		return (NULL);
	while (a < z)
	{
		str[i] = (char)s1[a];
		a++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	// char *str1 = "abcdba";
// 	// char *str2 = "acb";
// 	char *a = ft_strtrim("   xxx   xxx", " x");
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\n\nResult :%s", a);
// 	free (a);
// }