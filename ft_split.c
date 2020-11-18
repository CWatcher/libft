/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:25:15 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/18 13:06:02 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_wdlen(const char *s, char delim)
{
	size_t n;

	n = 0;
	while (s && s[n] && s[n] != delim)
		n++;
	return (n);
}

static char		*ft_skipchr(const char *s, char delim)
{
	while (s && *s && *s == delim)
		s++;
	return (char *)s;
}

static size_t	ft_wdcount(const char *s, char delim)
{
	size_t n;

	n = 0;
	while (s && *(s = ft_skipchr(s, delim)))
	{
		n++;
		s += ft_wdlen(s, delim);
	}
	return (n);
}

static char		**ft_freestrs(char **ps)
{
	char **pp;

	if (!ps)
		return (NULL);
	pp = ps;
	while (*ps)
		free(*ps++);
	free(pp);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**ps;
	size_t	n;
	size_t	l;
	size_t	i;

	if (!s)
		return (NULL);
	n = ft_wdcount(s, c);
	if (!(ps = malloc((n + 1) * sizeof(*ps))))
		return (NULL);
	i = 0;
	while (i < n)
	{
		s = ft_skipchr(s, c);
		l = ft_wdlen(s, c);
		if (!(ps[i] = ft_strndup(s, l)))
			ps = ft_freestrs(ps);
		s += l;
		i++;
	}
	ps[n] = NULL;
	return (ps);
}
