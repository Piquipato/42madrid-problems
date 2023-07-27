/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:09:49 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/26 20:09:52 by plalanda         ###   ########.fr       */
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
	char	*out;
	int		strn;
	int		i;
	int		idx;

	out = (char *) malloc(calc_len(size, strs, sep) * sizeof(char));
	strn = 0;
	idx = 0;
	while (strn < size)
	{
		i = 0;
		while (strs[strn][i])
			out[idx++] = strs[strn][i++];
		i = 0;
		while (sep[i] && strn != size - 1)
			out[idx++] = sep[i++];
		strn++;
	}
	out[idx] = '\0';
	return (out);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	calc_len(int size, char **strs, char *sep)
{
	const int	seplen = ft_strlen(sep);
	int			strn;
	int			j;
	int			count;

	strn = 0;
	count = 0;
	while (strn < size)
	{
		j = 0;
		while (strs[strn][j])
			j++;
		count += j;
		if (strn != size - 1)
			count += seplen;
		strn++;
	}
	return (count + 1);
}
