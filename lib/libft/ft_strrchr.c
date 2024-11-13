/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:27:50 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/08/31 15:07:15 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	if (!s)
		return (NULL);
	ptr = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (ptr);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char src[20] = "pepe y cparlos World";
	char c = 'y';

	printf("%s\n", strrchr(src, c));
	printf("%s\n", ft_strrchr(src, c));
}