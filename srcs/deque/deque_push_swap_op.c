/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_push_swap_op.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:58:12 by jules             #+#    #+#             */
/*   Updated: 2024/01/24 15:06:19 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

void	swap(t_deque d)
{
	t_node	first;
	t_node	second;

	if ((!d) || d->size < 2)
		return ;
	first = pop(d);
	second = pop(d);
	push(d, first);
	push(d, second);
}

void	rotate(t_deque d)
{
	t_node	first;

	if ((!d) || d->size < 2)
		return ;
	first = pop(d);
	push_back(d, first);
}

void	reverse_rotate(t_deque d)
{
	t_node	last;

	if ((!d) || d->size < 2)
		return ;
	last = pop_back(d);
	push(d, last);
}
