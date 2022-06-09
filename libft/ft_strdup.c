/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 22:24:08 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/17 17:37:38 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		count;
	int		i;
	char	*ptr;

	i = 0;
	count = ft_strlen((char *)s1);
	ptr = malloc((count + 1) * sizeof(*s1));
	if (ptr == NULL)
		return (ptr);
	while (i < count)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
