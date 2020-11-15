/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:57:04 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/14 13:51:44 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	size_t	n;

	if (!lst)
		return (0);
	n = 1;
	while ((lst = lst->next))
		n++;
	return (INT_MAX < n ? INT_MAX : n);
}
