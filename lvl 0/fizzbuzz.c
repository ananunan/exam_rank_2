/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:53:52 by aeberius          #+#    #+#             */
/*   Updated: 2024/11/08 14:18:39 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mini_puta (int nbr)
{
	char	result;

	if (nbr > 9)
		mini_puta (nbr/10);
	result = nbr % 10 + '0';
	write(1, &result, 1);
}

void	fizzbuzz()
{
	int i;
	i = 1;
	while (i <= 100)
	{
		if (i%3 == 0 && i%5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i%3 == 0)
			write (1, "fizz", 4);
		else if (i%5 == 0)
			write (1, "buzz", 4);
		else
			mini_puta(i);
	write (1, "\n",1);
	i++;
	}
}

int	main()
{
	fizzbuzz();
}
