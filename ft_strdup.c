/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwatcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 21:03:38 by cwatcher          #+#    #+#             */
/*   Updated: 2020/09/18 23:29:51 by cwatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	size_t	i;
	char	*d;

	n = ft_strlen(s);
	i = -1;
	d = malloc((n + 1) * sizeof(char));
	while (d && ++i <= n)
		d[i] = s[i];
	return (d);
}
