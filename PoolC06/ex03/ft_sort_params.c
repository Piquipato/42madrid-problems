/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:43:58 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/25 12:44:00 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if ()
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
			break ;
		k++;
	}
	return (s1[k] - s2[k]);
}

void	ft_swap(int *a, int *b)
{
	int	tmpa;
	int	tmpb;

	tmpa = *a;
	tmpb = *b;
	*a = tmpb;
	*b = tmpa;
}

void	write_str(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}