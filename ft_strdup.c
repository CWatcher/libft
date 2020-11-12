/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 21:03:38 by cwatcher          #+#    #+#             */
/*   Updated: 2020/11/10 15:45:12 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	n;
	size_t	i;
	char	*d;

	n = 0;
	while (s[n])
		n++;
	i = -1;
	d = malloc((n + 1) * sizeof(char));
	while (d && ++i <= n)
		d[i] = s[i];
	return (d);
}

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	size_t	l;
	char	*d;

	if (!s)
		return (NULL);
	l = 0;
	while (s[l])
		l++;
	n = n < l ? n : l;
	if (!(d = malloc((n + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		++i;
	}
	d[n] = '\0';
	return (d);
}
