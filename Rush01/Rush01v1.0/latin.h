/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   latin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:15:39 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/15 16:15:41 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LATIN_H__
#define __LATIN_H__

void	print_matrix(int n, int **mat);
int		*extract_col(int n, int col, int **mat);
void	print_vec(int n, int mat[]);
int		**make_matrix(int n);
void	dest_matrix(int **mat);
int		*clue_parse(int n, char *cls);
int		solve_matrix(int **mat, int *cls);
int		*extract_row(int n, int row, int **mat);

#endif
