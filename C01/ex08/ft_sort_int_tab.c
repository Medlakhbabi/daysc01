/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molakhba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:48:26 by molakhba          #+#    #+#             */
/*   Updated: 2024/09/15 18:01:54 by molakhba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	tmp;

	j = 0;
	while (j < size)
	{
		if (tab[j] > tab[size - j - 1])
		{
			tmp = tab[j];
			tab[j] = tab[size - j - 1];
			tab[size - j - 1] = tmp;
		}
		j++;
	}
}
