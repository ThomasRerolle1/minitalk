/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:13:31 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/03 10:09:05 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[1 + i] == '\0') && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char c)
{
	int	i;

	i = 0;
	while (from[i] != c && from[i] != '\0')
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char c)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c && str[i + j] != '\0')
				j++;
			split[word] = (char *) malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return ;
			write_word(split[word], str + i, c);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (split == NULL)
		return (0);
	write_split(split, (char *)s, c);
	split[count_words(s, c)] = 0;
	return (split);
}
/*
int	main(int argc, char ** argv)
{
	char	**split;
	if (argc != 3)
		return (0);
	split = ft_split(argv[1], argv[2][0]);
	while (*split != 0)
	{
		while (**split != '\0')
		{
			write(1, &**split, 1);
			(*split)++;
		}
		write(1, "\n", 1);
		split++;
	}
	return (0);
}
*/
