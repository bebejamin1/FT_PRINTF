/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:10:36 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/05 12:32:27 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
// 	t_list *lstlast = ft_lstlast(list);
// 	printf("%s", (char *)lstlast->content);
// }