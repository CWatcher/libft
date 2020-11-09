/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:36:29 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/08 16:53:45 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	if (!src)
		return (0);
	n = 0;
	while (n < dstsize && dst[n])
		n++;
	return (n + ft_strlcpy(dst + n, src, dstsize - n));
}
