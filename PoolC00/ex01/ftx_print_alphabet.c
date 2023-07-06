/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:28:09 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/06 12:28:13 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	l;

	l = 'a';
	while (l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
