/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftx_div_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:34:44 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 23:34:47 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	quot;
	int	rest;

	rest = a % b;
	quot = (a - rest) / b;
	*div = quot;
	*mod = rest;
}
