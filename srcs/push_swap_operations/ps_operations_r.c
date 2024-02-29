/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_r.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:19:51 by jules             #+#    #+#             */
/*   Updated: 2024/02/29 23:44:57 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_ps p, int print)
{
	if (!p || p->a->size < 2)
		return ;
	rotate(p->a);
	if (print)
		write(1, "ra\n", 3);
}

void	rb(t_ps p, int print)
{
	if (!p || p->b->size < 2)
		return ;
	rotate(p->b);
	if (print)
		write(1, "rb\n", 3);
}

void	rr(t_ps p, int print)
{
	if (!p || ((p->a->size < 2) && (p->b->size < 2)))
		return ;
	ra(p, 0);
	rb(p, 0);
	if (print)
		write(1, "rr\n", 3);
}
