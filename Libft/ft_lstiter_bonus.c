/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:27:26 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/04 17:18:47 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	node_change(void *elem)
// {
// 	if (!elem)
// 		return ;
// 	int i;
// 	char *content;

// 	i = 0;
// 	content = (char *)elem;
// 	while(content[i])
// 	{
// 		if (content[i] >= 'a' && content[i]<= 'z')
// 			content[i] = content[i] - 32;
// 		else
// 			content[i] = 'x';
// 		i++;
// 	}
// }
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int main()
// {
// 	t_list *lst;
// 	char *str = ft_strdup("aled");
// 	lst = ft_lstnew(str);
// 	printf("adresse : %p\t", (char *)lst);
// 	printf("Valeur  : %s\n", (char *)lst->content);
// 	ft_lstiter(lst, node_change);
// 	printf("adresse : %p\t", (char *)lst);
// 	printf("Valeur  : %s\n", (char *)lst->content);
// 	free (str);
// 	free (lst);
// }