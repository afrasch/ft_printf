/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:54:55 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/02 15:55:44 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	bool;
	int	words;
	int	i;

	bool = 0;
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			bool = 0;
		else if (bool == 0)
		{
			words++;
			bool = 1;
		}
		i++;
	}
	return (words);
}

static char	**ft_null(char **arr, int j)
{
	arr[j] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		words;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (0);
	words = ft_word_count(s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (0);
	i = 0;
	j = -1;
	while (++j < words)
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		arr[j] = ft_substr(s, start, i - start);
		i++;
	}
	return (ft_null(arr, j));
}
