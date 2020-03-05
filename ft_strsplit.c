/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:33:51 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/02/29 01:20:01 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char				**new;
	unsigned int		i;
	char				*end;

	if (!s ||
	(!(new = (char **)ft_memalloc(sizeof(char *) * (ft_wordcount(s, c) + 1)))))
		return (NULL);
	i = -1;
	while (*s)
	{
		while ((*s == c) && *s)
			++s;
		if (*s)
		{
			if (!(end = ft_strchr(s, c)))
				new[++i] = ft_strsub(s, 0, ft_strlen(s));
			else
				new[++i] = ft_strsub(s, 0, end - s);
		}
		while ((*s != c) && *s)
			++s;
	}
	return (new);
}
