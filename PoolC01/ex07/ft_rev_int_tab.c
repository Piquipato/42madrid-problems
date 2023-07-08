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
