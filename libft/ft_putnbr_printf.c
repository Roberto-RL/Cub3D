/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:52:15 by rrimonte          #+#    #+#             */
/*   Updated: 2024/10/20 12:52:16 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int	ft_putnbr_printf(int n, int fd)
{
	long int	nb;
	char		c;
	int			len;
	int			sign;

	len = 0;
	sign = 0;
	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
		sign = 1;
	}
	if (nb > 9)
		len += ft_putnbr_printf(nb / 10, fd);
	nb = nb % 10;
	c = nb + 48;
	len++;
	write(fd, &c, 1);
	return (len + sign);
}
