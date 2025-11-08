/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:22:38 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/04 07:37:24 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	t_list *list;
// 	char	*s;
// 	s = "ALED";
// 	list = ft_lstnew(s);
// 	s = "BEN";
// 	ft_lstadd_front(&list, ft_lstnew(s));
// 	s = "AU SECOUR";
// 	ft_lstadd_front(&list, ft_lstnew(s));
// 	printf("%d", ft_lstsize(list));
// }