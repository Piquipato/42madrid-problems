/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:09:49 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/26 20:23:26 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
int		calc_len(int size, char **strs, char *sep);

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	**strs;
	char	*total_string;
	int		i;

	if (argc > 2)
	{
		strs = (char **) malloc((argc - 2) * sizeof(char *));
		i = 2;
		while (i < argc)
		{
			strs[i - 2] = argv[i];
			i++;
		}
		total_string = ft_strjoin(argc - 2, strs, argv[1]);
		printf("%s\n", total_string);
		free(total_string);
	}
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	
}
