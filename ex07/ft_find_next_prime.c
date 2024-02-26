/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:54:31 by senayat           #+#    #+#             */
/*   Updated: 2024/02/22 23:58:42 by senayat          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	next;

	if (nb <= 1)
		return (2);
	next = nb;
	while (!ft_is_prime(next))
		next++;
	return (next);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	return (1);
	printf("%s!: %d\n", argv[1], ft_find_next_prime(atoi(argv[1])));
}
*/
