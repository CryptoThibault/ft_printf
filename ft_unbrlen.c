/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:31:18 by tchalaou          #+#    #+#             */
/*   Updated: 2023/11/21 12:31:38 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unbrlen(unsigned int nbr)
{
	int	len;

	len = 0;
	if (!nbr)
		len++;
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}
