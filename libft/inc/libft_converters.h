/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_converters.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 01:30:30 by mwelsch           #+#    #+#             */
/*   Updated: 2014/01/14 04:36:01 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_CONVERTERS_H
# define LIBFT_CONVERTERS_H

# include <libft_config.h>

char					*ft_itoa(int n);
int						ft_atoi(const char *str);
long					ft_atol(const char *str);
size_t					ft_number_length(unsigned long num, int base);
char					*ft_ntoa(unsigned long num, int base);
int						get_float_decimal(float f, int precision);


#endif /* !LIBFT_CONVERTERS_H */