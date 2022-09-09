/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:51:31 by teiffe            #+#    #+#             */
/*   Updated: 2022/09/09 17:53:40 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	remain;

	if (start > ft_strlen(s))
		remain = 0;
	else
		remain = ft_strlen(&s[start]);
	if (remain < len)
		len = remain;
	result = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
