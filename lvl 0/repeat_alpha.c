/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:35:35 by aeberius          #+#    #+#             */
/*   Updated: 2024/11/08 16:27:03 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha (char *str)
{
	int	i;
	int count;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			count = str[i] - 'a' + 1;
			while (count > 0)
			{
				write(1, &str[i], 1);
				count--;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count = str[i] - 'A' + 1;
			while (count > 0)
			{
				write(1, &str[i] , 1);
				count--;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}


}

int	main()
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write (1, '\n', 1);
}
