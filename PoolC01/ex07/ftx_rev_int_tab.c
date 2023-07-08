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

void	ft_rev_int_tab(int *tab, int size)
{
	int	orgarray[1024];
	int	newarray[1024];
	int	k;
	int	*tmp;

	k = 0;
	tmp = tab;
	while (k < size)
	{
		orgarray[k] = *tmp;
		tmp++;
		k++;
	}
	k = 0;
	while (k < size)
	{
		*tab = orgarray[size - 1 - k];
		tab++;
		k++;
	}
}

int	main(void)
{
	int	size = 24;
	int	mylist[size];
	int	k;

	k = 0;
	while (k < size)
	{
		mylist[k] = k;
		printf("%d ", mylist[k]);
		k++;
	}
	printf("\n");
	ft_rev_int_tab(&(mylist[0]), size);
	k = 0;
	while (k < size)
	{
		printf("%d ", mylist[k]);
		k++;
	}
	printf("\n");
	return (0);
}
