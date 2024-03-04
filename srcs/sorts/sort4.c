/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:04:08 by jbanacze          #+#    #+#             */
/*   Updated: 2024/03/04 17:31:38 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorts.h"

void	sort4(t_ps p)
{
	if (cmp_to_motif_dq(p->a, "xxx3"))
		rra(p, 1);
	if (cmp_to_motif_dq(p->a, "xx3x"))
		ra(p, 1);
	if (cmp_to_motif_dq(p->a, "x3xx"))
		sa(p, 1);
	if (cmp_to_motif_dq(p->a, "3xxx"))
	{
		pb(p, 1);
		sort3(p);
		pa(p, 1);
		ra(p, 1);
	}
}
