/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:04:07 by senayat           #+#    #+#             */
/*   Updated: 2024/02/22 23:14:47 by senayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nbr)
{
	int	fact;

	if (nbr < 0)
		return (0);
	if (nbr <= 1)
		return (1);
	fact = 1;
	while (nbr > 1)
	{
		fact *= nbr;
		nbr--;
	}
	return (fact);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	return (1);
	printf("%s!: %d\n", argv[1], ft_iterative_factorial(atoi(argv[1])));
}
*/
