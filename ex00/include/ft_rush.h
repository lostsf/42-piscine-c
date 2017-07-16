/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:12:02 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 13:29:58 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>

#define VALID_CHAR(x) x == ' ' || x == 'A' || x == 'B' || x == 'C' \
						  || x == '/' || x == '\\' || x == 'o' || x == '|' \
							|| x == '-' || x == '*'

int		is_valid_format(char *str, int rows, int cols);
void	find_rush(char *str);
int		count_rows(char *str);
int		count_cols(char *str);

#endif
