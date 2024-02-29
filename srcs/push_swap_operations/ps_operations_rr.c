/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_rr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:22:05 by jules             #+#    #+#             */
/*   Updated: 2024/02/29 23:25:23 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_ps p, int print)
{
	if (!p)
		return ;
	reverse_rotate(p->a);
	if (print)
		write(1, "rra\n", 4);
}

void	rrb(t_ps p, int print)
{
	if (!p)
		return ;
	reverse_rotate(p->b);
	if (print)
		write(1, "rrb\n", 4);
}

void	rrr(t_ps p, int print)
{
	rra(p, 0);
	rrb(p, 0);
	if (print)
		write(1, "rrr\n", 4);
}
