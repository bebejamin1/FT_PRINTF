/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:19:11 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/08 09:28:01 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del_node(void *content)
// {
// 	if (!content)
// 		return ;
// 	free(content);
// }
// void	*node_change(void *elem)
// {
// 	if (!elem)
// 		return (NULL);
// 	int i;
// 	char *content;

// 	i = 0;
// 	content = (char *)elem;
// 	while(content[i])
// 	{
// 		if (content[i] >= 'a' && content[i]<= 'z')
// 			content[i] = content[i] - 32;
// 		else if (content[i] >= 'A' && content[i]<= 'Z')
// 			content[i] = content[i] + 32;
// 		else
// 			content[i] = 'x';
// 		i++;
// 	}
// 	return (content);
// }
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlst;
	void	*tmp_content;

	if (!f || !del || !lst)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (NULL);
	lst = lst->next;
	temp = newlst;
	while (lst != NULL)
	{
		tmp_content = f(lst->content);
		temp = temp->next;
		temp = ft_lstnew(tmp_content);
		if (!temp)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, temp);
		lst = lst->next;
	}
	return (newlst);
}
// int main()
// {
// 	t_list *lst;
// 	t_list *ptr;
// 	char *str = ft_strdup("aled123");
// 	lst = ft_lstnew(str);
// 	printf("adresse : %p\t", (char *)lst);
// 	printf("Valeur  : %s\n", (char *)lst->content);
// 	ptr = ft_lstmap(lst, node_change, del_node);
// 	printf("adresse : %p\t", (char *)ptr);
// 	printf("Valeur  : %s\n", (char *)ptr->content);
// 	free (str);
// 	free (lst);
// 	free (ptr);
// }