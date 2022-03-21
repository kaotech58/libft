/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:46:44 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/19 10:31:06 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		go_to_next_word(char const **s, char c);
static size_t	get_word_len(char const *s, char c);
static void		free_memory(char **split, size_t word_count);
static char		**split_s(char const *s, char c, size_t word_count);

char	**ft_split(char const *s, char c)
{
	char		*s_trimmed;
	char const	*ptr;
	size_t		word_count;
	char		**split;

	if (!s)
		return (NULL);
	s_trimmed = ft_strtrim(s, &c);
	if (!s_trimmed)
		return (NULL);
	ptr = s_trimmed;
	word_count = 0;
	while (*ptr)
	{
		go_to_next_word(&ptr, c);
		ptr += get_word_len(ptr, c);
		word_count++;
	}
	split = split_s(s_trimmed, c, word_count);
	free(s_trimmed);
	return (split);
}

static char	**split_s(char const *s, char c, size_t word_count)
{
	size_t	current_word;
	size_t	word_len;
	char	**split;

	split = (char **) malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	current_word = -1;
	while (*s && ++current_word < word_count)
	{
		go_to_next_word(&s, c);
		word_len = get_word_len(s, c);
		split[current_word] = ft_substr(s, 0, word_len);
		if (!split[current_word])
		{
			free_memory(split, word_count);
			return (NULL);
		}
		s += word_len;
	}
	split[word_count] = NULL;
	return (split);
}

static void	go_to_next_word(char const **s, char c)
{
	while (**s && **s == c)
		(*s)++;
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_memory(char **split, size_t word_count)
{
	size_t	i;

	i = -1;
	while (++i <= word_count)
		free(split[i]);
	free(split);
}
