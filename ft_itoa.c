/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:22:15 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/15 15:13:57 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenght_nbr(long int n)
{
	int	l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		l++;
		n = -n;
	}
	while (n > 0)
	{
		l++;
		n /= 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*dest;
	long int	nbr;

	nbr = (long)n;
	len = lenght_nbr(nbr);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (nbr == 0)
		dest[0] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		dest[0] = '-';
	}
	dest[len] = '\0';
	while (nbr > 0)
	{
		dest[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (dest);
}
