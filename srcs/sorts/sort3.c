/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:39:01 by jbanacze          #+#    #+#             */
/*   Updated: 2024/03/04 17:04:52 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorts.h"

void	sort3(t_ps p)
{
	if (cmp_to_motif_dq(p->a, "021"))
	{
		rra(p, 1);
		sa(p, 1);
	}
	else if (cmp_to_motif_dq(p->a, "102"))
		sa(p, 1);
	else if (cmp_to_motif_dq(p->a, "120"))
		rra(p, 1);
	else if (cmp_to_motif_dq(p->a, "201"))
		ra(p, 1);
	else
	{
		sa(p, 1);
		rra(p, 1);
	}
	return ;
}
