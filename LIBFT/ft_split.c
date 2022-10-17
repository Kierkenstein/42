/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:59:05 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/06 17:44:00 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(char const *s, char c)
{	
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && i < ft_strlen(s))
			i++;
		while (s[i] != c && i < ft_strlen(s))
		{
			i++;
			if (s[i] == c || s[i] == '\0')
				count++;
		}
	}
	return (count);
}

static	int	ft_free_str(char **strtab, int i)
{	
	while (i >= 0)
	{
		free(strtab[i]);
		i--;
	}
	free(strtab);
	return (1);
}

static	void	ft_fill(const char *s, char c, int wordcount, char **strtab)
{
	int	i;
	int	start;
	int	len;
	int	check;

	i = 0;
	start = 0;
	len = 0;
	check = 0;
	while (i < wordcount && check == 0)
	{
		len = 0;
		while (s[start] == c && s[start] != '\0')
			start++;
		while (s[start + len] != c && s[start + len] != '\0')
			len++;
		if (len > 0)
			strtab[i] = ft_substr(s, start, len);
		if (strtab[i] == NULL)
			check = ft_free_str(strtab, i);
		start = start + len;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	char	**strtab;

	if (s == NULL)
		return (NULL);
	wordcount = ft_count_words(s, c);
	strtab = ft_calloc(wordcount + 1, sizeof(char *));
	if (strtab == NULL)
		return (NULL);
	ft_fill(s, c, wordcount, strtab);
	return (strtab);
}
