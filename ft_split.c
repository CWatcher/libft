/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:25:15 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/11 10:43:08 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	else
		return (0);
}

size_t	wdlen(const char *s)
{
	size_t i = 0;
	while (!ft_isspace(s[i]))
		i++;
	return (i);
}

char	*findwd(const char *s)
{
	while (*s && ft_isspace(*s))
		s++;
	return (char *)s;
}

size_t	wdcount(const char *s)
{
	size_t c = 0;
	s = findwd(s);
	while (!ft_isspace(*s))
	{
		c++;
		s += wdlen(s);
		s = findwd(s);
	}
	return (c);
}

char	*wddup(const char *s) {
	size_t n = wdlen(s);
	char *d = malloc((n + 1) * sizeof(*s));
	for (size_t i = 0; i < n; i++)
		d[i] = s[i];
	d[n] = '\0';
	return (d);
}

char **ft_split(char const *s, char c)
{
	c = 0;
	size_t n;

	n = wdcount(s);
	char **ps = malloc((n + 1) * sizeof(*ps));
	for (size_t i = 0; i < n; i++)
	{
		s = findwd(s);
		ps[i] = wddup(s);
		s += wdlen(s);
	}
	ps[n] = NULL;
	return (ps);
}
