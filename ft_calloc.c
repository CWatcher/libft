/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:00:13 by CWatcher          #+#    #+#             */
/*   Updated: 2021/08/18 13:43:17 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	n;
	size_t	i;

	n = count * size;
	if (n / count != size)
		return (NULL);
	i = 0;
	p = malloc(n);
	if (p)
		while (i < n)
			p[i++] = 0;
	return (p);
}
