#include "utils.h"

int *ft_copy_arr(int *arr, size_t len)
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
	return cpy;
}