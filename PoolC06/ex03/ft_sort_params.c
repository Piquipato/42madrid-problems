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
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **arg1, char **arg2);
void	write_str(char *str);
void	print_arglist(int argc, char **argv);

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	min_idx;

	i = 1;
	print_arglist(argc, argv);
	while (i < argc - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[min_idx]) < 0)
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			printf("argv[%d] = %s\n", j, argv[j]);
			ft_swap(&argv[i], &argv[j]);
		}
		//write_str(argv[i]);
		printf("argv[%d] = %s\n", i, argv[i]);
		//write(1, "\n", 1);
		i++;
	}
	//write_str(argv[i]);
	printf("%s\n", argv[i]);
	//write(1, "\n", 1);
	return (0);
}

void	print_arglist(int argc, char **argv)
{
	int	k;

	write(1, "[ ", 2);
	k = 1;
	while (k < argc)
	{
		write_str(argv[k]);
		write(1, " ", 1);
		k++;
	}
	write(1, "]\n", 2);
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

void	ft_swap(char **arg1, char **arg2)
{
	char	*tmp;

	tmp = *arg1;
	*arg1 = *arg2;
	*arg2 = tmp;
}

void	write_str(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}