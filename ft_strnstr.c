/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:30:33 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/19 17:38:46 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s, const char *s2, size_t n)
{
	size_t	j;

	if (!s || !s2)
		return (NULL);
	if (!*s2)
		return ((char *)s);
	while (n > 0 && *s)
	{
		j = 0;
		while (s[j] && j < n && s[j] == s2[j])
			if (!s2[++j])
				return ((char *)s);
		n--;
		s++;
	}
	return (NULL);
}
