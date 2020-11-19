/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:45:31 by CWatcher          #+#    #+#             */
/*   Updated: 2020/11/16 12:43:41 by CWatcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned	num;
	char		r;

	if (n < 0)
		write(fd, "-", sizeof(char));
	num = n < 0 ? -n : n;
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	r = num % 10 + '0';
	write(fd, &r, sizeof(r));
}
