/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftx_ultimate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:48:06 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 23:48:09 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	numer;
	int	denom;
	int	quot;
	int	rest;

	numer = *a;
	denom = *b;
	rest = numer % denom;
	quot = (numer - rest) / denom;
	*a = quot;
	*b = rest;
}
