/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:33:44 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/02/27 10:35:00 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	const char *endptr;
	const char *charptr;

	if (maxlen == 0)
		return (0);
	charptr = s - 1;
	endptr = s + maxlen;
	while (*++charptr)
	{
		if (charptr == endptr)
			return (endptr - s);
	}
	return (charptr - s);
}
