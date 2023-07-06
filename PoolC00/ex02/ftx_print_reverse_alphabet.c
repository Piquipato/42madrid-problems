/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:36:53 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/06 14:37:01 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	l;

	l = 'z';
	while (l >= 'a')
	{
		write(1, &l, 1);
		l--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
