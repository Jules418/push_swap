/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_more_operations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:10 by jbanacze          #+#    #+#             */
/*   Updated: 2024/03/06 17:27:15 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

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

size_t	max_pos(t_deque d)
{
	size_t	i;
	size_t	maxi_pos;
	size_t	maxi;
	t_node	current;

	current = d->front;
	if (!current)
		return (0);
	i = 0;
	maxi = current->value;
	maxi_pos = 0;
	while (current)
	{
		if (maxi < current->value)
		{
			maxi = current->value;
			maxi_pos = i;
		}
		i++;
		current = current->next;
	}
	return (maxi_pos);
}

size_t	min_pos(t_deque d)
{
	size_t	i;
	size_t	mini_pos;
	size_t	mini;
	t_node	current;

	current = d->front;
	if (!current)
		return (0);
	i = 0;
	mini = current->value;
	mini_pos = 0;
	while (current)
	{
		if (mini > current->value)
		{
			mini = current->value;
			mini_pos = i;
		}
		i++;
		current = current->next;
	}
	return (mini_pos);
}
