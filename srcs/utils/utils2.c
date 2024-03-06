/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:00:28 by jules             #+#    #+#             */
/*   Updated: 2024/03/04 21:43:57 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	*ft_copy_arr(int *arr, size_t len)
{
	int		*cpy;
	size_t	i;

	if (!arr || !len)
		return (NULL);
	cpy = malloc(sizeof(int) * len);
	if (!cpy)
		return (NULL);
	i = -1;
	while (++i < len)
		cpy[i] = arr[i];
	return (cpy);
}

