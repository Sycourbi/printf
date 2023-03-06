/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:12:14 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/22 14:25:37 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen( const char *s);
void	ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd, int count);
int		ft_putnbr_fd(int n, int fd, int count);
int		ft_putunsigint_fd(unsigned int u, int fd, int count);
int		ft_hexa(const char *format, va_list ap, int count);
int		ft_printf(const char *str, ...);

#endif
