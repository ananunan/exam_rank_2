/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:32:41 by aeberius          #+#    #+#             */
/*   Updated: 2024/11/06 18:48:53 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone (char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Y' ||
			str[i] >= 'a' && str[i] <= 'y'))
			str[i] = str[i] + 1;
		else if (str[i] == 'z' || str[i] == 'Z')
			str[i] = str[i] - 25;
		write (1, &str[i],1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
	}
	write (1, "\n",1);
}
