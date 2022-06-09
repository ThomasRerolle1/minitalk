/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:00:52 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/02 16:47:19 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_start(char const *set, char const *s)
{
	int	i;

	i = 0;
	while (ft_strchr(set, (int)s[i]) != NULL && s[i])
		i++;
	return (i);
}

int	find_end(const char *set, char const *s)
{
	int	i;

	i = ft_strlen(s);
	while (ft_strchr(set, (int)s[i]) != NULL && i != 0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*dst;
	int		start;
	int		end;

	if (!s || !set)
		return (NULL);
	start = find_start(set, s);
	end = find_end(set, s);
	if (start > end)
		return (ft_strdup(""));
	dst = ft_substr(s, start, end - start + 1);
	return (dst);
}

/*
int main()
{
	const char	s1[] = "abcdba";
	const char	set[] = "abc";
	//char *test = "Hello \t PLEASE\n Trim  me!";
	//printf("%zu\n", ft_strlen(test));

	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/
