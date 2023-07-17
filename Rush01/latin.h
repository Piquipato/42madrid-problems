/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   latin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:54:36 by cream             #+#    #+#             */
/*   Updated: 2023/07/16 14:54:39 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LATIN_H__
#define __LATIN_H__

// Matrix Utilities:
void	rush_app(int n, char *str);
int		**make_matrix(int n, int m);
void	rm_matrix(int **mat);
void	print_matrix(int **mat, int n, int m);
int		**clue_parse(char *str, int n);
int		power(int base, int exp);
int		logar(int n, int b);
int		**log_mat(int **mat, int n);
int		**pow_mat(int **mat, int n);
void	print_vec(int *mat, int n);
void	fill_matrix(int **mat, int n);
int		ft_atoi(const char *str);
void	ft_putnbr(int nb);
int		is_pow2(int n);
int		**ft_solver(int **mat, int **cls, int n, int *p);
int		**rm_impossible(int **mat, int **cls, int n);
int		fix_answer(int **new, int **last, int n);
int		**copy_matrix(int **mat, int n, int m);
void	rm_colup(int **mat, int **cls, int n);
void	rm_coldown(int **mat, int **cls, int n);
void	rm_rowleft(int **mat, int **cls, int n);
void	rm_rowright(int **mat, int **cls, int n);
void	rm_val_rc(int **mat, int n);
void	rm_cls_rc(int **mat, int **cls, int n);
int 	**guess(int **mat, int **cls, int n, int *p);
int		check_result(int **mat, int n, int final);

#endif
