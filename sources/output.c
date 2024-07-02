/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <ambroise.bareux@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:17:42 by abareux           #+#    #+#             */
/*   Updated: 2024/07/02 14:04:14 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <the_cookie_lib.h>

//A number between the % and the format letter specifies the width.
//The result will be left-padded with spaces.

__attribute__((unused)) static
void	parse_format(int fd, char *format, va_list argument_list)
{
	int	width;

	width = cookie_lib_atoi(format);
	while (cookie_lib_is_number(*format))
		format++;
	if (*format == 'd' || *format == 'i')
		;
	else if (*format == 'o')
		;
	else if (*format == 'u')
		;
	else if (*format == 'x')
		;
	else if (*format == 'x')
		;
	else if (*format == 'X')
		;
	else if (*format == 'f')
		;
	else if (*format == 'g' || *format == 'G')
		;
	else if (*format == 'e' || *format == 'E')
		;
	else if (*format == 's')
		;
	else if (*format == 'c')
		;
	else if (*format == 'b')
		;
	else if (*format == '%')
		write(fd, "%", 1);
	else
	{
		write(fd, "%", 1);
		write(fd, format, 1);
	}
}

__attribute__((unused))
void	cookie_lib_printf(char *f_string, ...)
{
	va_list	argument_list;

	va_start(argument_list, f_string);
	while (*f_string)
	{
		if (*f_string == '%')
			parse_format(1, ++f_string, argument_list);
		f_string++;
	}
}

__attribute__((unused))
void	cookie_lib_fprintf(int fd, char *f_string, ...)
{
	va_list	argument_list;

	va_start(argument_list, f_string);
	while (*f_string)
	{
		if (*f_string == '%')
			parse_format(fd, ++f_string, argument_list);
		f_string++;
	}
}
