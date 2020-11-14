#include <limits.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	n;
	char 	*d;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	n = UINT_MAX < n ? UINT_MAX : n;
	if (!(d = malloc((n + 1) * sizeof(char))))
		return (NULL);
	d[n] = '\0';
	i = 0;
	while (i < n)
	{
		d[i] = f(i, s[i]);
		i++;
	}
	return (d);
}
