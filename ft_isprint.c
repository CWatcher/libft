/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:40:40 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/13 09:57:59 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return ((unsigned)c - 0x20 < 0x5F);
}

int	ft_isspace(char c)
{
	const char *ws = " \t\n\v\f\r";

	while (*ws && c != *ws)
		ws++;
	if (*ws)
		return (1);
	return (0);
}
