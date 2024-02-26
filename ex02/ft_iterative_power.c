/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:22:03 by senayat           #+#    #+#             */
/*   Updated: 2024/02/22 23:25:59 by senayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nbr, int power)
{
	int	num_power;

	if (power < 0)
		return (0);
	num_power = 1;
	while (power-- > 0)
		num_power *= nbr;
	return (num_power);
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
