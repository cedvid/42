/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:36:45 by cvidot            #+#    #+#             */
/*   Updated: 2022/10/27 10:44:26 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 2)
		return (0);
	while (argv[1][i] == 32)
		i++;
	while (argv[1][i] != 32 && argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}