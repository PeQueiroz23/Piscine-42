/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 21:04:30 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/09 13:20:33 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	start;

	start = 0;
	size --;
	while (start < size)
	{
		swap = tab[start];
		tab[start] = tab[size];
		tab[size] = swap;
		start ++;
		size --;
	}
}
