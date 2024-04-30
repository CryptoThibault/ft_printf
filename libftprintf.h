/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:51:43 by tchalaou          #+#    #+#             */
/*   Updated: 2023/11/23 13:52:49 by tchalaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putmem_fd(char c, void *value, int fd);
void	ft_putunbr_fd(unsigned int nbr, int fd);
void	ft_putnbr_base_fd(unsigned int nbr, char *base, int fd);
void	ft_putlnbr_base_fd(unsigned long nbr, char *base, int fd);
void	ft_putflags_fd(char c, char n, void *value, int fd);
int		ft_memlen(char c, void *value);
int		ft_nbrlen(long nbr);
int		ft_unbrlen(unsigned int nbr);
int		ft_nbr_baselen(unsigned int nbr, int base_len);
int		ft_lnbr_baselen(unsigned long nbr, int base_len);
int		ft_flagslen(char c, char n, void *value);

#endif
