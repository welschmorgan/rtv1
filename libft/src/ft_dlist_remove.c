/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/19 15:16:37 by mwelsch           #+#    #+#             */
/*   Updated: 2014/01/19 15:17:04 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_printf.h>
#include <libft_dlist.h>

void	ft_dlist_remove(t_dlist *list, t_dnode *node, t_dnode_deleter deleter)
{
#ifdef _DEBUG
	ft_printf("Removing node 0x%x from list 0x%x ...\n",
			  node, list);
#endif
	if (!list || !node)
		return ;
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	if (list->tail == node)
		list->tail = node->next;
	else if (list->head == node)
		list->head = node->prev;
	if (!list->tail)
		list->tail = list->head;
	if (!list->head)
		list->head = list->tail;
	deleter(node);
	if (list->size)
		list->size -= 1;
}