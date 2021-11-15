/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 12:05:48 by smissott          #+#    #+#             */
/*   Updated: 2021/11/15 14:53:41 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	idx;

	idx = 0;
	while (idx < ft_strlen(str) + 1)
	{
		if (str[idx] == (char)c)
			return ((char *)str + idx);
		idx++;
	}
	return (NULL);
}
