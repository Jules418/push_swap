/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_cmp_to_motif.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:39:54 by jules             #+#    #+#             */
/*   Updated: 2024/03/04 21:47:59 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
