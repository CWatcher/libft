/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 11:08:57 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/10 16:06:41 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n;

	n = 0;
	if (s1 && *s1)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		if (*s1)
		{
			n = ft_strlen(s1);
			n--;
			while (ft_strrchr(set, s1[n]))
				n--;
			n++;
		}
	}
	return (ft_strndup(s1, n));
}
