/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:15:13 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/11 10:32:32 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t n;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	start = start < n ? start : n;
	n -= start;
	n = n < len ? n : len;
	return (ft_strndup(s + start, n));
}
