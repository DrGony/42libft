/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:50:32 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/11 10:40:34 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	j;
	const void	*tmp;

	j = 0;
	while (j < n && src[j])
		tmp[j] = src[j++];
	tmp[j] = '\0';
	j = 0;
	while (j < n && tmp[j])
		dest[j] = tmp[j++];
	tmp[j] = '\0';
	return (dest);
}
