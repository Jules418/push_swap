/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_push_swap_op.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:58:12 by jules             #+#    #+#             */
/*   Updated: 2024/03/04 17:13:16 by jbanacze         ###   ########.fr       */
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

int	cmp_to_motif(t_node l, char *mot)
{
	if (!l)
		return (mot[0] == 0);
	if (mot[0] == 0)
		return (0);
	if (mot[0] == 'x')
		return (cmp_to_motif(l->next, mot + 1));
	return ((l->value == (size_t)(mot[0] - '0')) && 
		cmp_to_motif(l->next, mot + 1));
}

int	cmp_to_motif_dq(t_deque d, char *mot)
{
	if (!d || !mot)
		return (0);
	return cmp_to_motif(d->front, mot);
}