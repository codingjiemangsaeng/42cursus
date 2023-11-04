/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon < jihyjeon@student.42seoul.kr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:51:51 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/11/01 14:53:57 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!f)
		return ;
	while (lst)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return (0);
		new->content = (*f)(lst->content);
		new->next = NULL;
		new = new->next;
		lst = lst->next;
	}
	return (new);
}
