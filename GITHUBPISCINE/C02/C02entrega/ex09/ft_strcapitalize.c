/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:51:45 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/12 16:12:31 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alfanum(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	p;
	int	inicio_palavra;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'A' && str[p] <= 'Z')
			str[p] = str[p] + 32;
		p++;
	}
	inicio_palavra = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (ft_is_alfanum(str[p]) == 1)
		{
			if (inicio_palavra == 1 && (str[p] >= 'a' && str[p] <= 'z'))
				str[p] = str[p] - 32;
			inicio_palavra = 0;
		}
		else
			inicio_palavra = 1;
		p++;
	}
	return (str);
}
