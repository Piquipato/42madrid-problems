/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   natnum.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:52:43 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/23 21:53:28 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NATNUM_H
# define NATNUM_H

// Read Functions:
int		*digit_list(int n);
int		*read_hundred(int *digits);
int		*read_digits(int *digits);
int		*segment_num(int n);

// List Utils:
int		calc_size(int *digits);
int		*empty_list(void);
int		*power(int base, int exp);
void	print_list(int *list);
int		magnitude(int n);

// List Mods:
int		*append_elm(int *l1, int *l2);
int		*extract_sublist(int *list, int start, int end);

// C Utilities:
void	ft_putnbr(int nb);
int		ft_atoi(const char *str);
int		check_digits(char *str);

// Print Utils:
void	enter_trim(char *total_string);
char	*ft_trim(char *total_string, int num_chars);
char	*file_to_string(char *file_name, char c, int i);
int		num_rows(char *total_string);
void	find_number(char *total_string, int num);

#endif
