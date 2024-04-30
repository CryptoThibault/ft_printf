/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:41:47 by tchalaou          #+#    #+#             */
/*   Updated: 2023/11/23 12:07:08 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base_fd(unsigned int nbr, char *base, int fd)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_putnbr_base_fd(nbr / base_len, base, fd);
	ft_putchar_fd(base[nbr % base_len], fd);
}
