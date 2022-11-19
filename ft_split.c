/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:47:53 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/19 14:17:12 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_w(char *s, char c)
{
	int	words;

	words = 0;
	while (s && *s && *s == c)
		s++;
	if (s && *s && *s != c)
		words++;
	while (s && *s && *s != c)
		s++;
	if (s && *s && *s == c)
		words += nb_w(s, c);
	return (words);
}

int	nb_letters(char *s, char c)
{
	int	letters;

	letters = 0;
	while (s && s[letters] && s[letters] != c)
		letters++;
	return (letters);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		j;
	int		i;
	int		words;

	i = -1;
	words = nb_w((char *)s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!s || !tab)
		return (0);
	while (++i < words)
	{
		j = 0;
		while (s && *s && *s == c)
			s++;
		tab[i] = malloc(sizeof(char) * (nb_letters((char *)s, c) + 1));
		while (s && *s && *s != c)
		{
			tab[i][j++] = *s;
			s++;
		}
		tab[i][j] = 0;
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main()
{
	char **strs;
	int	i;

	strs = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	i = 0;
	while (strs[i])
	{
		puts(strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}*/
