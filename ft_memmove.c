/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:50:32 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/19 11:26:40 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	j;

	j = -1;
	if (!dest && !src)
		return (NULL);
	if ((size_t)dest - (size_t)src < n)
	{
		j = n;
		while (j > 0)
		{
			((unsigned char *)dest)[j - 1] = ((unsigned char *)src)[j - 1];
			j--;
		}
	}
	else
		while (++j < n)
			((unsigned char *)dest)[j] = ((unsigned char *)src)[j];
	return (dest);
}
