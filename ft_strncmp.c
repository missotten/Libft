/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:24:12 by smissott          #+#    #+#             */
/*   Updated: 2021/11/15 14:55:12 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while ((str1[idx] != '\0' || str2[idx] != '\0') && (idx + 1) < n)
	{
		if (str1[idx] == str2[idx])
			idx++;
		else
			return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
	}
	return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
}
