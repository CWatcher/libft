/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:00:13 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/07 18:10:40 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	n;
	size_t	i;

	n = count * size;
	i = 0;
	if ((p = malloc(n)))
		while (i < n)
			p[i++] = 0;
	return (p);
}
