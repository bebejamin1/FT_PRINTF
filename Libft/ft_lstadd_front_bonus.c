/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:09:46 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/03 13:21:23 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {
// 	t_list	*s = ft_lstnew("yolobiblo hihihi");
// 	t_list	*s1 = ft_lstnew("picore");
// 	ft_lstadd_front(&s, s1);
// 	printf("content = %s\n", (char *)s1->content);
// 	printf("content = %s", (char *)s1->next->content);
// }