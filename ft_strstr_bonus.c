/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:07:03 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/16 13:08:01 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(const char *s, const char *s2)
{
	const char	*p;
	size_t		i;
	size_t		j;

	if (!*s2)
		return ((char *)s);
	i = 0;
	p = s;
	while (s[i])
	{
		j = 0;
		while (p[j] && p[j] == s2[j])
			if (!s2[++j])
				return ((char *)p);
		i++;
		p++;
	}
	return (NULL);
}
