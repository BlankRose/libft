/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcollar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:49:59 by flcollar          #+#    #+#             */
/*   Updated: 2022/03/03 21:49:59 by flcollar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	lst->content = content;
	lst->next = 0;
	return (lst);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	*ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst && lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = lst;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
