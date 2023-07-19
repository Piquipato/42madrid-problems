/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:52:51 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 20:52:55 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_txtnbr(char *txt, int n, int s, char *base)
{
	int 	k;
	char	*buf;
	
	k = 0;
	if (n < 0)
		txt[k++] = '-';
		n = -n;
	while (n != 0)
	{
		
		txt[k++] = base[n % 10];
		n /= 10;
	}
}