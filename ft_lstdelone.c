/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:54:59 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/03/04 13:18:57 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Takes as a parameter a link’s pointer address and frees the memory of the
** link’s content using the function del given as a parameter, then frees the
** link’s memory using free().
*/

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*acnt;

	acnt = *alst;
	del((acnt->content), (acnt->content_size));
	free(*alst);
	*alst = NULL;
}
