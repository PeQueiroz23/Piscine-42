/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:39:49 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/18 23:11:05 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	res = res * sign;
	return (res);
}
/*
void ft_putchar(char i)
{
	write(1, &i, 1);
	return;
}
void ft_putnbr(int nb)
{	
	long int	n;
	
	n = nb;
	if (n < 0)
	{	
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{	
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else 
		ft_putchar(n + '0');
}*/
/*
int main(void)
{	
	int	resultado;

	resultado = ft_atoi("-a2301");
	ft_putnbr(resultado);
	resultado = ft_atoi("-2147483648");
        ft_putnbr(resultado);	
	resultado = ft_atoi("-230a1");
        ft_putnbr(resultado);
	return(0);
}
*/
