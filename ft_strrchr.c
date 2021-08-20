/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:17:41 by CWatcher          #+#    #+#             */
/*   Updated: 2021/08/18 13:53:28 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = NULL;
	while (s && *s)
	{
		if (*s == c)
			p = s;
		s++;
	}
	if (!c)
		p = s;
	return ((char *)p);
}
