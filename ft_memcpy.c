/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:33:29 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/29 11:13:22 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	j;

	if (!dest && !src)
		return (NULL);
	j = -1;
	while (++j < n)
		((char *)dest)[j] = ((const char *)src)[j];
	return (dest);
}
