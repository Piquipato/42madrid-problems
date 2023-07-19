/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftx_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:55:13 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 23:55:15 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
