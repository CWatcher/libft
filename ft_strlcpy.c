/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:42:36 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/05 13:30:24 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	i;
	size_t	m;

	if (!src)
		return (0);
	n = ft_strlen(src);
	if (dst && dstsize)
	{
		i = 0;
		m = n < dstsize - 1 ? n : dstsize - 1;
		while (i < m)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (n);
}
