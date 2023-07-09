/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftx_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:08:28 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/09 00:08:30 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int randint(int n) {
  if ((n - 1) == RAND_MAX) {
    return rand();
  } else {
    // Supporting larger values for n would requires an even more
    // elaborate implementation that combines multiple calls to rand()
    assert (n <= RAND_MAX);

    // Chop off all of the values that would cause skew...
    int end = RAND_MAX / n; // truncate skew
    assert (end > 0);
    end *= n;

    // ... and ignore results from rand() that fall above that limit.
    // (Worst case the loop condition should succeed 50% of the time,
    // so we can expect to bail out of this loop pretty quickly.)
    int r;
    while ((r = rand()) >= end);

    return r % n;
  }
}

void	swap(int *a, int *b)
{
	int	tmpa;
	int	tmpb;

	tmpa = *a;
	tmpb = *b;
	*a = tmpb;
	*b = tmpa;
}

void	print_array(int *tab, int size)
{
	int k;

	k = 0;
	printf("[ ");
	while (k < size)
	{
		printf("%d ", tab[k]);
		k++;
	}
	printf("]\n");
}

void	randintlist(int *lst, int size)
{
	int k;
	
	k = 0;
	while(k < size)
	{
		lst[k] = randint(size);
		k++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_idx;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
		if (min_idx != i)
		{
			swap(&tab[min_idx], &tab[i]);
		}
		i++;
	}
}

int	main(void)
{
	int	mylist[128];

	randintlist(mylist, 12);
	print_array(mylist, 12);
	ft_rev_int_tab(mylist, 12);
	print_array(mylist, 12);
	return (0);
}
