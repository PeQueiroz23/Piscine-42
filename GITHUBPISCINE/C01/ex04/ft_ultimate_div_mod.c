/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pequeiro <pequeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:30:11 by pequeiro          #+#    #+#             */
/*   Updated: 2026/02/07 17:33:28 by pequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/* nao se poder fazer: void    ft_ultimate_div_mod(int *a, int *b)
{
        *a = a / b;
        *b = a % b;
pois, *a ja e um ponteiro, nao valor.
preciso de uma variavel 2 novas variaveis int. 
ha DUAS maneiras de interagir com um pointer 1. 
referencing (&x = endereco de x (ex: 0x1000), x esta em 0x1000
derefencing (*)= "abrir o endereco", *ponteiro vai ate o endereco que o ponteiro 
guarda e pegue/modifique o valor.
}*/

/*int div;

        int mod;

        *a = div;
        *b = mod;
        div = (*a / *b);
        mod = (*a % *b);
nao pode assim tambem se nao *a = div
sobscrevem os valores originais de a e b*/
