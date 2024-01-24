/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_common_operations.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:21:50 by jules             #+#    #+#             */
/*   Updated: 2024/01/24 15:06:06 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int	is_empty(t_deque d)
{
	if (!d)
		return (-1);
	return (d->size == 0);
}

t_node	pop(t_deque d)
{
	t_node	n;

	if (!d || is_empty(d))
		return (NULL);
	n = d->front;
	d->front = n->next;
	if (d->front == NULL)
		d->back = NULL;
	else
		d->front->prev = NULL;
	d->size--;
	return (n);
}

t_node	pop_back(t_deque d)
{
	t_node	n;

	if (!d || is_empty(d))
		return (NULL);
	n = d->back;
	d->back = n->prev;
	if (d->back == NULL)
		d->front = NULL;
	else
		d->back->next = NULL;
	d->size--;
	return (n);
}

void	push(t_deque d, t_node n)
{
	if (!n || !d)
		return ;
	n->prev = NULL;
	n->next = d->front;
	if (d->front)
		d->front->prev = n;
	d->front = n;
	if (n->next == NULL)
		d->back = n;
	d->size++;
}

void	push_back(t_deque d, t_node n)
{
	if (!d || !n)
		return ;
	n->next = NULL;
	n->prev = d->back;
	if (d->back)
		d->back->next = n;
	d->back = n;
	if (n->prev == NULL)
		d->front = n;
	d->size++;
}
