/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <ambroise.bareux@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:03:12 by abareux           #+#    #+#             */
/*   Updated: 2024/07/02 14:04:25 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_H
# define OUTPUT_H

# include <stdarg.h>
# include <unistd.h>

void	cookie_lib_printf(char *f_string, ...);
void	cookie_lib_fprintf(int fd, char *f_string, ...);

#endif