/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:28:04 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/03/04 16:27:48 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t n)
{
	unsigned char *ptr;
	
	ptr = (unsigned char *)b;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (b);
}
