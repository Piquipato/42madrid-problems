/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:29:10 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/25 15:29:12 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

/*
#include <stdio.h>
void	print_list(int *list, int size);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (atoi(argv[1]) < atoi(argv[2]))
			print_list(ft_range(atoi(argv[1]), atoi(argv[2])), 
			atoi(argv[2]) - atoi(argv[1]));
		else
			printf("%d\n", ft_range(atoi(argv[1]), atoi(argv[2])));
	}
}

void	print_list(int *list, int size)
{
	int	k;

	k = 1;
	printf("[ ");
	while (k <= size)
		printf("%d ",list[k++]);
	printf("]\n");
}
*/

int	*ft_range(int min, int max)
{
	int	*out;

	if (min >= max)
		return (0);
	out = (int *) malloc((max - min) * sizeof(int));
	while (min < max)
	{
		out[min] = min;
		min++;
	}
	return (out);
}
