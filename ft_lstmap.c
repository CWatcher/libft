/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:57:04 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/15 19:50:37 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *p;
	t_list *r;

	if (!lst || !(r = ft_lstnew(f(lst->content))))
		return (NULL);
	p = r;
	lst = lst->next;
	while (lst && p)
	{
		p->next = ft_lstnew(f(lst->content));
		if ((p = p->next))
			lst = lst->next;
	}
	if (!p && lst)
		ft_lstclear(&r, del);
	return (r);
}
