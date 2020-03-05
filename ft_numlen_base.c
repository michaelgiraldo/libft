/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:36:15 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/03/04 13:57:59 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen_base(long int n, size_t base)
{
	if (n < 0)
		return (ft_numlen_base(n * -1, base) + 1);
	else if (n >= (long int)base)
		return (ft_numlen_base(n / base, base) + 1);
	return (1);
}
