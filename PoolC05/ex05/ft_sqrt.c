/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:20:19 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/19 16:20:21 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("sqrt(%d) = %d\n",
			atoi(argv[1]), ft_sqrt(atoi(argv[1])));
}

int	ft_sqrt(int nb)
{
	float	r;
	float	t;

	r = nb;
	t = 0;
	while (t != r)
	{
		t = r;
		r = ((nb / r) + r) / 2;
	}
	if (r - ((int) r) > 0)
		return (0);
	else
		return ((int) r);
}
