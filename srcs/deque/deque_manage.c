/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_manage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:38:45 by jules             #+#    #+#             */
/*   Updated: 2024/01/25 06:39:58 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

t_deque	new_deque(void)
{
	t_deque	d;

	d = (t_deque)malloc(sizeof(struct s_deque));
	d->size = 0;
	d->front = NULL;
	d->back = NULL;
	return (d);
}

void	free_deque(t_deque d)
{
	while (!is_empty(d))
		free_node(pop(d));
	free(d);
}

int		get_front_value(t_deque d)
{
	return (d->front->value);
}