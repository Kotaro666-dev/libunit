/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 19:31:10 by kkamashi          #+#    #+#             */
/*   Updated: 2021/04/09 10:44:51 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_blocks(char const *str, char c)
{
	int	i;
	int	blocks;

	i = 0;
	blocks = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			if (str[i + 1] == c || str[i + 1] == '\0')
			{
				blocks++;
			}
		}
		i++;
	}
	return (blocks);
}

static int	count_words_in_each_blocks(char const *str, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		words++;
	}
	return (words);
}

static void	free_memory(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	**split_words(char const *str, char c, int blocks, char **res)
{
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	while (i < blocks)
	{
		while (*str == c)
			str++;
		words = count_words_in_each_blocks(str, c);
		res[i] = (char *)malloc(sizeof(char) * (words + 1));
		if (!res[i])
		{
			free_memory(res, i);
			return (NULL);
		}
		j = 0;
		while (j < words)
			res[i][j++] = *str++;
		res[i++][j] = '\0';
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char	const *s, char c)
{
	char	**result;
	int		blocks;

	if (s == NULL)
	{
		return (NULL);
	}
	blocks = count_blocks(s, c);
	result = (char **)malloc(sizeof(char *) * (blocks + 1));
	if (!result)
		return (NULL);
	result = split_words(s, c, blocks, result);
	return (result);
}
