/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <ambroise.bareux@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:42:41 by abareux           #+#    #+#             */
/*   Updated: 2024/07/02 14:17:04 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <the_cookie_lib.h>

__attribute__((unused))
int	cookie_lib_atoi(const char *string)
{
	int	result;

	result = 0;
	while (cookie_lib_is_number(*string))
	{
		result = result * 10 + (*string++ - '0');
	}
	return (result);
}

__attribute__((unused))
unsigned int	cookie_lib_atou(const char *string)
{
	unsigned int	result;

	result = 0;
	while (cookie_lib_is_number(*string))
	{
		result = result * 10 + (*string++ - '0');
	}
	return (result);
}

__attribute__((unused))
long long int	cookie_lib_atolli(const char *string)
{
	long long int	result;

	result = 0;
	while (cookie_lib_is_number(*string))
	{
		result = result * 10 + (*string++ - '0');
	}
	return (result);
}

__attribute__((unused))
long long unsigned int	cookie_lib_atollui(const char *string)
{
	long long unsigned int	result;

	result = 0;
	while (cookie_lib_is_number(*string))
	{
		result = result * 10 + (*string++ - '0');
	}
	return (result);
}

__attribute__((unused))
short int	cookie_lib_atosi(const char *string)
{
	short int	result;

	result = 0;
	while (cookie_lib_is_number(*string))
	{
		result = result * 10 + (*string++ - '0');
	}
	return (result);
}

__attribute__((unused))
short unsigned int	cookie_lib_atosui(const char *string)
{
	short unsigned int	result;

	result = 0;
	while (cookie_lib_is_number(*string))
	{
		result = result * 10 + (*string++ - '0');
	}
	return (result);
}

__attribute__((unused))
int	cookie_lib_is_number(char character)
{
	if (character >= '0' && character <= '9')
		return (true);
	return (false);
}
