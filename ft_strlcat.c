/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:06:40 by smissott          #+#    #+#             */
/*   Updated: 2021/11/16 10:58:40 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	idx1;
	size_t	idx2;

	idx1 = 0;
	idx2 = 0;
	while (dest[idx1] != '\0' )
		idx1++;
	if (idx1 >= destsize)
		return (destsize + (ft_strlen(src)));
	while (src[idx2] != '\0' && idx1 < destsize - 1)
	{
		dest[idx1] = src[idx2];
		idx1++;
		idx2++;
	}
	dest[idx1] = '\0';
	return ((idx1 - idx2) + (ft_strlen(src)));
}
