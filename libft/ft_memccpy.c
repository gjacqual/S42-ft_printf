/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:37:51 by gjacqual          #+#    #+#             */
/*   Updated: 2021/07/19 19:02:31 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		str2[i] = str1[i];
		if (str1[i] == (unsigned char)c)
			return (str2 + i + 1);
		i++;
	}
	return (NULL);
}
