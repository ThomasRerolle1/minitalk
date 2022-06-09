/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:41:42 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/02 18:50:19 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;

	if (s == NULL)
		return (NULL);
	if (ft_strlen((char *)s) < len)
		substring = ft_calloc(ft_strlen((char *)s) + 1, sizeof(*substring));
	else
		substring = ft_calloc(len + 1, sizeof(*substring));
	if (substring == NULL || ft_strlen((char *)s) <= start)
		return (substring);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}
/*
int main()
{
	char const		*s = "tripouille";
	unsigned int	start = 8;
	size_t			len = 10;

	printf("%s\n", ft_substr("tripouille", 0, 4200), strlen("tripouille") + 1);
	return (0);
}*/
