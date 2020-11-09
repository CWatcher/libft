/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:30:33 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/09 15:33:26 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s, const char *s2, size_t n)
{
	const char	*p;
	size_t		i;
	size_t		j;

	if (!*s2)
		return ((char *)s);
	i = 0;
	p = s;
	while (i < n && s[i])
	{
		j = 0;
		while (p[j] && i + j < n && p[j] == s2[j])
			if (!s2[++j])
				return ((char *)p);
		i++;
		p++;
	}
	return (NULL);
}
