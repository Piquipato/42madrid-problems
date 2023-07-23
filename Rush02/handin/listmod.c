/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listmod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:08:44 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/23 22:08:46 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "natnum.h"

int	*append_elm(int *l1, int *l2)
{
	const int	size = l1[0] + l2[0] + 1;
	int			*out;
	int			idx;
	int			lidx;

	out = (int *) malloc(size * sizeof(int));
	out[0] = size - 1;
	idx = 1;
	lidx = 1;
	while (lidx <= l1[0])
	{
		out[idx] = l1[lidx];
		idx++;
		lidx++;
	}
	lidx = 1;
	while (lidx <= l2[0])
	{
		out[idx] = l2[lidx];
		idx++;
		lidx++;
	}
	free(l1);
	free(l2);
	return (out);
}

int	*extract_sublist(int *list, int start, int end)
{
	int			*out;
	int			k;

	out = (int *) malloc((end - start + 2) * sizeof(int));
	out[0] = (end - start + 1);
	k = 0;
	while ((k + start) <= end)
	{
		out[k + 1] = list[start + k];
		k++;
	}
	return (out);
}
