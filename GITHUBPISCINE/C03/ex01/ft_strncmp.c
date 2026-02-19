/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:23:36 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/15 13:11:23 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/* int main()
{
	int	resultado;
	resultado = ft_strncmp("AbcDe", "AbcDj", 5);
	printf("E o resultado e: %d\n", resultado);
	return(0);
}*/
/* SEM PRINTF E COM WRITE:
void	ft_putnbr(int nb)
{
	char	c;
	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
int	main(void)
{
	ft_putnbr(ft_strncmp("abc", "abc", 3));   // 0
	write(1, "\n", 1);
	ft_putnbr(ft_strncmp("abc", "abX", 2));   // 0  
	write(1, "\n", 1);
	
	ft_putnbr(ft_strncmp("abc", "abd", 3));   // -1
	write(1, "\n", 1);
	
	ft_putnbr(ft_strncmp("ab", "abc", 3));    // -99
	write(1, "\n", 1);
	
	return (0);
}*/
