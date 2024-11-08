/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:24:41 by aeberius          #+#    #+#             */
/*   Updated: 2024/11/08 13:52:08 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word (char *str)
{
	int	i;

	i = 0;

	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		first_word (argv[1]);
	}
	write (1, "\n", 1);
}
