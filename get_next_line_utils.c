/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:28:38 by jormanue          #+#    #+#             */
/*   Updated: 2025/07/27 17:57:44 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlenton(char *str, int n)
{
	unsigned char	nb;

	nb = 0;
	if (n == 1)
	{
		while (str[nb] && str[nb] != '\n')
			nb++;
		return (nb);
	}
	else
	{
		while (str[nb])
			nb++;
		return (nb);
	}
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char*)malloc(
		sizeof(*s1) * (ft_strlenton(s1, 0) + ft_strlenton(s2, 0) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*i;
	int				l;
	int				t;

	l = 0;
	t = 0;
	i = (unsigned char *)s;
	while (c > 255)
		c = (-256) + c;
	while (i[t])
	{
		if (i[t] == c)
			l = t;
		t++;
	}
	if (i[t] == c)
		return ((char *)i + t);
	if (i[l] == c)
		return ((char *)i + l);
	return (NULL);
}


void	*ft_calloc(size_t nmemb, size_t size)
{
	return (ft_memset(malloc(nmemb * size), 0, (nmemb * size)));
}

void	*ft_memset(void *s, int c, size_t n)
{
	if (!s && (!c && n))
		return (NULL);
	while (n--)
		((unsigned char *)s)[n] = (unsigned char)c;
	return (s);
}
