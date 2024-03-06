/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:39:01 by jbanacze          #+#    #+#             */
/*   Updated: 2024/03/06 17:58:52 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorts.h"

void	sort3(t_ps p)
{
	if (max_pos(p->a) == 1)
	{
		rra(p, 1);
		if (!is_deque_sorted(p->a))
			sa(p, 1);
	}
	else if (max_pos(p->a) == 2)
		sa(p, 1);
	else
	{
		ra(p, 1);
		if (!is_deque_sorted(p->a))
			sa(p, 1);
	}
	return ;
}
