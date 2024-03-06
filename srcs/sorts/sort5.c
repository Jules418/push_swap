/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:39:22 by jbanacze          #+#    #+#             */
/*   Updated: 2024/03/06 17:56:31 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorts.h"

void	sort5(t_ps p)
{
	if (cmp_to_motif_dq(p->a, "xx4xx"))
		ra(p, 1);
	if (cmp_to_motif_dq(p->a, "x4xxx"))
		ra(p, 1);
	if (cmp_to_motif_dq(p->a, "xxx4x"))
		rra(p, 1);
	if (cmp_to_motif_dq(p->a, "xxxx4"))
		rra(p, 1);
	if (cmp_to_motif_dq(p->a, "4xxxx"))
		pb(p, 1);
	sort4(p);
	pa(p, 1);
	ra(p, 1);
}
