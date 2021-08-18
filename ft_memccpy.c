/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:40:17 by CWatcher          #+#    #+#             */
/*   Updated: 2021/08/18 15:02:57 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (n <= 0 || !dst || !src)
		return (NULL);
	d = dst;
	s = src;
	while (n--)
		if ((*d++ = *s++) == (unsigned char)c)
			return (d);
	return (NULL);
}
