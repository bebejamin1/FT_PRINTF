/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:23:21 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/08 09:18:54 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del_node(void *content)
// {
// 	// if (!content)
// 	// 	return ;
// 	free(content);
// }
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (lst != NULL && *lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// int main()
// {
// 	t_list		*begin;
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	char		*str = strdup("lorem");
// 	char		*str2 = strdup("ipsum");
// 	char		*str3 = strdup("dolor");
// 	char		*str4 = strdup("sit");

// 	elem = ft_lstnew(str);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem4 = ft_lstnew(str4);
// 	if (!elem || !elem2 || !elem3 || !elem4)
// 		return (0);
// 	else
// 	{
// 		begin = NULL;
// 		ft_lstadd_front(&begin, elem);
// 		ft_lstadd_front(&begin, elem2);
// 		ft_lstadd_front(&begin, elem3);
// 		ft_lstadd_front(&begin, elem4);
// 	}
// 	// printf("nbr = %d\n", ft_lstsize(elem4));
// 	ft_lstclear(&elem4, del_node);
// 	// printf("nbr = %d", ft_lstsize(elem4));
// 	return (0);
// }