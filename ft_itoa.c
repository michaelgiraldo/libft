/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:24:16 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/03/02 12:07:07 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*new;
	int		len;
	int		nflag;

	len = ft_numlen(n);
	new = ft_strnew(len);
	nflag = 0;
	if (!new)
		return (NULL);
	if (n < 0)
		nflag = 1;
	while (len--)
	{
		if (nflag && len == 0)
			new[len] = '-';
		else
			new[len] = ft_abs(n % 10) + 48;
		n /= 10;
	}
	return (new);
}
