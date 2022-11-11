/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:50:32 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/11 12:03:21 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	j;
	char	*tmp;

	j = -1;
	tmp = 0;
	while (++j < n)
		tmp[j] = ((const char *)src)[j];
	j = -1;
	while (++j < n)
		((char *)dest)[j] = tmp[j];
	return (dest);
}
