/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_baselen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:44:57 by tchalaou          #+#    #+#             */
/*   Updated: 2023/11/23 12:04:23 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nbr_baselen(unsigned int nbr, int base_len)
{
	int	len;

	len = 0;
	if (!nbr)
		len++;
	while (nbr > 0)
	{
		len++;
		nbr /= base_len;
	}
	return (len);
}
