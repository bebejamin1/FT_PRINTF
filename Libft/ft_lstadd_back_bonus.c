/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:41:55 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/08 09:34:39 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new && *lst)
	{
		last = *lst;
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else if (!(*lst))
		*lst = new ;
}
// int main(void)
// {
// 	t_list *list;
// 	char	*s;
// 	s = "ALED";
// 	list = ft_lstnew(s);
// 	s = "BEN";
// 	ft_lstadd_front(&list, ft_lstnew(s));
// 	s = "AU SECOURS";
// 	ft_lstadd_front(&list, ft_lstnew(s));
// 	s = "kiri";
// 	ft_lstadd_back(&list, ft_lstnew(s));
// 	printf("%s\n", (char *)s);
// 	printf("%s\n", (char *)ft_lstlast(list)->next);
// }