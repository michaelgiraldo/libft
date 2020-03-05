/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:49:53 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/02/28 18:12:20 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char *char_ptr;
	unsigned char		r;

	char_ptr = (const unsigned char *)s;
	r = (unsigned char)c;
	while (*char_ptr != r)
	{
		if (!*char_ptr)
			return (NULL);
		++char_ptr;
	}
	return ((void *)char_ptr);
}
