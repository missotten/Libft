/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 12:29:27 by smissott          #+#    #+#             */
/*   Updated: 2021/11/15 14:54:23 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	idx;

	idx = ft_strlen(str);
	while (idx >= 0)
	{
		if (str[idx] == (char)c)
			return ((char *)str + idx);
		idx--;
	}
	return (NULL);
}
