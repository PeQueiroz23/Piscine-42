/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:12:22 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/17 18:19:11 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
//#include <stdio.h>
/*
int main(void)
{
	char str [] = "abcdefg";
	
	ft_strlen(str);
	printf("%d\n", ft_strlen(str));
	return(0);
}*/
