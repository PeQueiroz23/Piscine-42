/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:30:59 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/10 13:03:34 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 65 && *str <= 90)
				|| (*str >= 97 && *str <= 122)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*does not work in C like this:  if(65 >= string <= 90 && 97 >= string <=122) 
se for 1 antes do return(0) ele para antes de check others
else  can not use else before while. */
