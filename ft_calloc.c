/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:52:39 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/19 10:30:05 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	size_t	i;

	i = 0;
	if (!size && nmemb > SIZE_MAX / size)
		return (NULL);
	dest = malloc(size * nmemb);
	if (!dest)
		return (NULL);
	while (i < nmemb)
		((unsigned char *)dest)[i++] = 0;
	return (dest);
}
