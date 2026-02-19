/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:20:44 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/16 18:01:12 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
void    ft_putstr(char *i)
{
	if (i == NULL)
		return;
        while (*i != '\0')
        {
                write(1, i, 1);
                i++;
        }
}
*/
/*int main ()
{
        char str[] = "Ola mundo";
        char to_find[] = "und";
        char *p = ft_strstr(str, to_find);

        ft_putstr(p);
        return (0);
}*/
