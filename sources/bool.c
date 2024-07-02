/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <ambroise.bareux@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:06:29 by abareux           #+#    #+#             */
/*   Updated: 2024/07/02 14:06:34 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <the_cookie_lib.h>

__attribute__((unused))
t_uint_64	cookie_lib_compare_bits(t_uint_64 v_a, t_uint_64 v_b, short rank)
{
	return ((v_a >> rank) & (v_b >> rank));
}