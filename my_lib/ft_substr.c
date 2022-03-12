/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:09:27 by afrasch           #+#    #+#             */
/*   Updated: 2021/06/28 14:13:57 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	substr = (char *)malloc(sizeof(char) * len + 1);
	if (substr == 0 || s == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (j >= start && i < len)
		{
			substr[i] = s[j];
			i++;
		}
		j++;
	}
	substr[i] = '\0';
	return (substr);
}
