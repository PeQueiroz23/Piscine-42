/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:12:31 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/07 18:29:17 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
/* *str   → VALOR do caractere atual ('a', 'b', etc.)
    str    → ENDEREÇO/ponteiro da string
void    ft_putchar(char str), pois write so imprime 1 byte.
&str da o endereco onde esta a primera letra que quero imprimir
*/	
