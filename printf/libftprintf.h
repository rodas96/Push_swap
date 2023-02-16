/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:13:57 by rmorais           #+#    #+#             */
/*   Updated: 2022/11/16 19:49:43 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>

# define HEXALOWER "0123456789abcdef"
# define HEXAUPPER "0123456789ABCDEF"
# define DECIMAL "0123456789"

int	ft_printchar(int c);
int	ft_printstr(const char *s);
int	ft_printnbrbase(long	long n, char *base, long long baselen, char c);
int	ft_printnbr(long long n);
#endif