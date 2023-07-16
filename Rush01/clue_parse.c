/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:07:27 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 16:07:30 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "latin.h"
#include <stdio.h>

int	**clue_parse(char *str, int n)
{
	int	**cls;
	int	i;
	int	j;
	int	k;

	cls = make_matrix(4, n);
	k = 0;
	i = 0;
	j = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 48 && str[k] <= 57)
			cls[i][j++] = str[k] - '0';
		if (j == n)
		{
			j = 0;
			i++;
		}
		k++;
	}
	return (cls);
}
