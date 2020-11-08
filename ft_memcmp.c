/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:11:27 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/08 11:48:22 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p;
	const unsigned char *q;
	size_t				i;

	p = s1;
	q = s2;
	i = -1;
	while (++i < n)
		if (p[i] != q[i])
			return (p[i] - q[i]);
	return (0);
}
