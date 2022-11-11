/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:33:29 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/11 10:41:58 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n && src[j])
		dest[j++] = src[j];
	dest[j] = '\0';
	return (dest);
}
