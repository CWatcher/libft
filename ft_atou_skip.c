/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atou_skip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 20:07:37 by cwatcher          #+#    #+#             */
/*   Updated: 2021/03/08 18:49:04 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	ft_atou_skip(char **ps)
{
	unsigned	n;
	unsigned	prev_n;

	while (ft_strchr(" \t\n\r\f\v", **ps))
		++*ps;
	*ps += (**ps == '+');
	n = 0;
	while (ft_isdigit(**ps))
	{
		prev_n = n;
		n = n * 10 + (**ps - '0');
		++*ps;
		if (n <= prev_n)
		{
			n = prev_n;
			break;
		}
	}
	while (ft_isdigit(**ps))
		++*ps;
	return (n);
}
