/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:57:51 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 22:58:04 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	(*nbr) = 42;
}

int	main(void)
{
	int	test;

	test = 7;
	printf("%d\n", test);
	ft_ft(&test);
	printf("%d\n", test);
}
