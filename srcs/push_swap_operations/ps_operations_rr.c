/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_rr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:22:05 by jules             #+#    #+#             */
/*   Updated: 2024/01/24 15:06:55 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_ps p)
{
	if (!p)
		return ;
	reverse_rotate(p->a);
}

void	rrb(t_ps p)
{
	if (!p)
		return ;
	reverse_rotate(p->b);
}

void	rrr(t_ps p)
{
	rra(p);
	rrb(p);
}
