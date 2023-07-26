/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:38:38 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/26 17:01:35 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int tmp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	tmp = min;
	while (tmp < max)
	{
		(*range)[i++] = tmp;
		tmp++;
	}
	return (max - min);
}

/**/
#include <stdio.h>
void	print_list(int *list, int size);

int	main(int argc, char **argv)
{
	int	**range;
	int	ret;

	range = (int **) malloc(sizeof(int *));
	if (argc == 3)
	{
		ret = ft_ultimate_range(range, atoi(argv[1]), atoi(argv[2]));
		if (atoi(argv[1]) < atoi(argv[2]))
		{
			print_list(*range, atoi(argv[2]) - atoi(argv[1]));
			printf("Return value %d\n", ret);
		}
		else
		{
			printf("Return value %d\n", ret);
		}			
	}
	return (0);
}

void	print_list(int *list, int size)
{
	int	k;

	k = 0;
	printf("[ ");
	while (k < size)
		printf("%d ",list[k++]);
	printf("]\n");
}
/**/
