/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 05:10:56 by jules             #+#    #+#             */
/*   Updated: 2024/01/28 01:53:10 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	swap_qs(int arr[], size_t i, size_t j)
{
	int	tmp;

	tmp = arr[j];
	arr[j] = arr[i];
	arr[i] = tmp;
}

size_t	partition(int arr[], size_t len)
{
	int		val_pivot;
	size_t	pv_index;
	size_t	i;

	val_pivot = arr[0];
	pv_index = 1;
	i = 1;
	while (i < len)
	{
		if (arr[i] < val_pivot)
		{
			swap_qs(arr, i, pv_index);
			pv_index++;
		}
		i++;
	}
	swap_qs(arr, 0, pv_index - 1);
	return (pv_index - 1);
}

void	quick_sort(int arr[], size_t len)
{
	size_t	i;

	if (len <= 1)
		return ;
	i = partition(arr, len);
	quick_sort(arr, i);
	quick_sort(arr + i + 1, len - i - 1);
}
