/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:42:24 by senayat           #+#    #+#             */
/*   Updated: 2024/02/22 23:52:30 by senayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	if (nb <= 1)
		return (0);
	div = nb;
	while (--div > 1)
		if (nb % div == 0)
			return (0);
	return (1);
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
