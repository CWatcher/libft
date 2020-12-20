/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:07:03 by CWatcher          #+#    #+#             */
/*   Updated: 2020/12/20 17:32:52 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(const char *s, const char *s2)
{
	size_t	j;

	if (!s || !s2)
		return (NULL);
	if (!*s2)
		return ((char *)s);
	while (*s)
	{
		j = 0;
		while (s[j] && s[j] == s2[j])
			if (!s2[++j])
				return ((char *)s);
		s++;
	}
	return (NULL);
}
