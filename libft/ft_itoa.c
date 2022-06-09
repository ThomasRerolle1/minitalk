/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:08:30 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 09:03:29 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_n(int n)
{
	int	count;

	count = 0;
	while ((n / 10) != n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*fill_tab(char *str, int count, unsigned int long_n)
{
	while (str[count] != '-' && count >= 0)
	{
		str[count] = '0' + (long_n % 10);
		long_n = long_n / 10;
		--count;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	long_n;
	char			*str;
	int				count;

	long_n = n;
	count = size_n(n);
	if (n < 0)
	{
		str = (char *)malloc(sizeof(char) * (count + 2));
		if (str == NULL)
			return (str);
		str[0] = '-';
		long_n = -n;
		count++;
	}
	else if (n == 0)
		return (ft_strdup("0"));
	else
		str = (char *)malloc(sizeof(char) * (count + 1));
	str[count] = '\0';
	count--;
	str = fill_tab(str, count, long_n);
	return (str);
}

/*
int main()
{
	int	n = 1;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
