/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:24:16 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/03/03 23:15:33 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int b)
{
	char	*new;
	int		len;
	int		nflag;
	int		digit;

	len = (n < 0 && b != 10) ? ft_numlen_base(n, b) - 1 : ft_numlen_base(n, b);
	nflag = 0;
	if (n < 0 && b == 10)
		nflag = 1;
	if (!(new = ft_strnew(len)))
		return (NULL);
	while (len--)
	{
		if (nflag && len == 0 && b == 10)
			new[len] = '-';
		else
		{
			digit = ft_abs(n % b);
			new[len] = (digit < 10) ? digit + 48 : digit + 55;
		}
		n /= b;
	}
	return (new);
}
