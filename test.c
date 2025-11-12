/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:24:19 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/12 09:50:39 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int ft_sum(int first_num, ...)
{
	va_list	ap;
	int		num;
	int		count;

	va_start(ap, first_num);
	num = 1;
	count = first_num;
	if (first_num == 0)
		return (0);
	while (num != 0)
	{
		num = va_arg(ap , int);
		count = count + num;
	}
	va_end (ap);
	return (count);
}

int ft_find_char(int to_find, ...)
{
	va_list	ap;
	int		i;
	char	*str;
	char	c;

	c = (char)to_find;
	va_start(ap, to_find);
	if (!to_find)
		return (0);
	str = va_arg(ap , char *);
	while (str != NULL)
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == c)
				return (1);
			i++;
		}
		str = va_arg(ap , char *);
	}
	va_end (ap);
	return (0);
}

// int	main(void)
// {
// 	printf("rep = %d\n", ft_sum(10, 20, 30, 0));
// 	printf("rep = %d\n", ft_sum(5, 5, 0, 5, 5, 5));
// 	printf("rep = %d\n", ft_sum(100, 0));
// 	printf("rep = %d\n", ft_sum(0));
// 	printf("sum = %d\n", ft_find_char('a', "hello", "world", "banana", NULL));
// 	printf("sum = %d\n", ft_find_char('z', "hello", "world", "apple", NULL));
// 	printf("sum = %d\n", ft_find_char('H', "Hello", "world", NULL));
// 	printf("sum = %d\n", ft_find_char('\0', "hello", "world", NULL));
// }