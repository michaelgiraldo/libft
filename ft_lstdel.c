/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:54:39 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/03/04 17:02:48 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Takes as a parameter the adress of a pointer to a link and frees the memory
** of this link and every successors of that link.
*/

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*acnt;
	t_list	*anxt;

	acnt = *alst;
	while (acnt)
	{
		anxt = acnt->next;
		del((acnt->content), (acnt->content_size));
		free(acnt);
		acnt = anxt;
	}
	*alst = NULL;
}
