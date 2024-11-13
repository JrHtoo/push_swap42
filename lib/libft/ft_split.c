/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:40:26 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/08/30 11:36:03 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countletter(char const *s, char c, int pos)
{
	int	count;

	count = 0;
	while (s[pos] != c && s[pos])
	{
		count++;
		pos++;
	}
	return (count);
}

static int	ft_wordcount(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*word_generator(char const *s, char c, int pos)
{
	int		len;
	int		i;
	char	*word;

	len = ft_countletter(s, c, pos);
	word = (char *)malloc(len + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (s[pos + i] != c && s[pos + i])
	{
		word[i] = s[pos + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		pos;
	int		size;
	char	**lst;

	if (!s)
		return (NULL);
	size = ft_wordcount(s, c);
	lst = (char **)malloc(sizeof(char *) * (size + 1));
	if (lst == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	while (s[pos])
	{
		if (s[pos] != c && s[pos])
		{
			lst[i] = word_generator(s, c, pos);
			pos = pos + ft_countletter(s, c, pos) - 1;
			i++;
		}
		pos++;
	}
	lst[i] = 0;
	return (lst);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[500] = "  tripouille  42   ";
// 	char c = ' ';
// 	int		i;
// 	char	**arr;
// 	int j;

// 	j = 0;
// 	i = ft_wordcount(str, c);
// 	printf("%d\n", i);
// 	arr = ft_split(str, c);
// 	while (j <= i)
// 	{
// 		printf("%s\n", arr[j]);
// 		free(arr[j]);
// 		j++;
// 	}
// 	free(arr);
// }