/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:59:25 by gjacqual          #+#    #+#             */
/*   Updated: 2022/02/08 22:15:41 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

# include <limits.h>
# include "libft.h"

int		ft_printf(const	char *inpt, ...);
int		ft_print_xx_int(va_list ap, const char *inpt, int i);
int		ft_print_pointer_int(va_list ap);
int		ft_print_un_int(va_list ap);
int		ft_print_iord_int(va_list ap);
int		ft_print_string(va_list ap);
int		ft_print_char(va_list ap);
int		ft_type_define(va_list ap, int count, const char *inpt, int i);
void	ft_putstr_fd(char *s, int fd);
char	*ft_un_itoa(unsigned int n);
char	*ft_xx_itoa(unsigned int n, char *str);
int		ft_putnbr_ptr(unsigned long n);
int		ft_putstr_counter(char *s);

#endif