/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:40:17 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/08 12:29:26 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dst != src)
	{
		d = dst;
		s = src;
		i = 0;
		while (i < n)
		{
			if ((d[i] = s[i]) == (unsigned char)c)
				return (d + i + 1);
			i++;
		}
	}
	return (NULL);
}
