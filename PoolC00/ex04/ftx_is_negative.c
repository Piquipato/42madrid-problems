/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:49:27 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/06 14:49:32 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_is_negative(int n)
{
	int	ans;

	if (n < 0)
	{
		ans = 'N';
	}
	else
	{
		ans = 'P';
	}
	write(1, &ans, 1);
}

int	main(int argc, char *argv[])
{
	int dtc = 0;
	for (int j=0; j<argc; j++) {
		if (dtc == 1) {
			ft_is_negative(atoi(argv[j]));
		}
		if (strcmp(argv[j],"-n") == 0) {
			dtc = 1;
		}
	}
	return (0);
}
