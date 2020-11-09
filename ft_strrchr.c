/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:17:41 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/08 19:09:01 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *p;

	p = NULL;
	while (*s)
	{
		if (*s == c)
			p = s;
		s++;
	}
	if (c == *s)
		p = s;
	return ((char *)p);
}
