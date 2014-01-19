/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:10:00 by mwelsch           #+#    #+#             */
/*   Updated: 2014/01/19 01:48:01 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = dest;
	while (i < n && dest && src && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n && dest && src)
	{
		dest[i] = '\0';
		i ++;
	}
	return (ptr);
}