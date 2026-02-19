/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:20:00 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/04 19:33:03 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i)
{
	write (1, &i, 1);
}

void	print_combination(int a, int b, int c)
{
	ft_putchar (a + '0');
	ft_putchar (b + '0');
	ft_putchar (c + '0');
	if (!(a == 7 && b == 8 && c == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_combination (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int main ()
{ 
	ft_print_comb ();
	return (0);
}*/				
