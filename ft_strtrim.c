/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 11:08:57 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/19 16:32:47 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char const *p;

	while (s && *s && ft_strchr(set, *s))
		s++;
	p = s ? s + ft_strlen(s) - 1 : NULL;
	while (p && p > s && ft_strchr(set, *p))
		p--;
	return (ft_strndup(s, p - s + 1));
}
