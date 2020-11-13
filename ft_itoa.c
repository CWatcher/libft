/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 13:40:07 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/13 17:41:57 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	unsigned	num;
	size_t		l;
	char		*s;

	num = n > 0 ? n : -n;
	l = 1 + (n < 0);
	while (num /= 10)
		l++;
	if (!(s = malloc((l + 1) * sizeof(char))))
		return (NULL);
	s[l] = '\0';
	if (n < 0)
		s[0] = '-';
	else if (n == 0)
		s[0] = '0';
	num = n > 0 ? n : -n;
	while (num)
	{
		s[--l] = '0' + (num % 10);
		num /= 10;
	}
	return (s);
}
