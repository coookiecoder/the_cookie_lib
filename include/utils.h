/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <ambroise.bareux@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:50:02 by abareux           #+#    #+#             */
/*   Updated: 2024/07/02 14:10:51 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int						cookie_lib_atoi(const char *string);
unsigned int			cookie_lib_atoui(const char *string);
long long int			cookie_lib_atolli(const char *string);
long long unsigned int	cookie_lib_atollui(const char *string);
short int				cookie_lib_atosi(const char *string);
short unsigned int		cookie_lib_atosui(const char *string);

int						cookie_lib_is_number(char character);

#endif