/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:30:10 by jules             #+#    #+#             */
/*   Updated: 2024/01/28 02:48:23 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorts.h"

void	sort3(t_ps p)
{
	(void) p;
	return ;
}

void	sort5(t_ps p)
{
	(void) p;
	return ;
}

void	radix_cycle(t_ps p, int mask, int *c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = p->a->size;
	while (i < len)
	{
		if (!(get_front_value(p->a) & mask))
			pb(p);
		else
			ra(p);
		i++;
		(*c)++;
	}
	while (!is_empty(p->b))
	{
		pa(p);
		(*c)++;
	}
}

int	radix_sort(t_ps p)
{
	size_t	ln2_size;
	size_t	i;
	int		count;

	count = 0;

	ln2_size = ln2(p->a->size);
	i = 0;
	while (i < ln2_size)
	{
		radix_cycle(p, 1 << i, &count);
		i++;
	}
	return (count);
}
