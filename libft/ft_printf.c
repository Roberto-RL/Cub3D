/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:51:48 by rrimonte          #+#    #+#             */
/*   Updated: 2024/10/20 12:51:49 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, format);
	if (format[len] == '%' && format[len + 1] == '\0')
		return (0);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_format(format++, args);
		}
		else
		{
			ft_putchar_printf(*format, 1);
			format++;
			len++;
		}
		if (*format == '\0')
			break ;
	}
	va_end(args);
	return (len);
}

/*
int	main(void)
{

	char	*tab = "test";
	char	*vide = "";
	char	*null = NULL;
        printf("char %c int %d str %s uint %u hex %x pointeur %p\n",
       	'A', 456, "test", -123456, 1245, &tab);
	ft_printf("char %c int %d str %s uint %u hex %x pointeur %p\n",
       	'A', 456, "test", -123456, 1245, &tab);

	printf("test 2 : str vide %s\n", vide);
        ft_printf("test 2 : str vide %s\n", vide);
	ft_printf("%p\n", null);
	printf("%p\n", null);


	//printf(" %c ", '0');
	//ft_printf(" %c ", '0');

	//int	i = 0;
	//i = ft_printf("%d, %d", -10, 20);
	//ft_printf("\n%d", i);

	ft_printf("%");
	//printf("%");
	return (0);
	
}*/
