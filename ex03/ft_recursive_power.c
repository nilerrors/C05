/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:26:41 by senayat           #+#    #+#             */
/*   Updated: 2024/02/22 23:29:31 by senayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nbr, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nbr * ft_recursive_power(nbr, power - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	return (1);
	printf("%s!: %d\n", argv[1], ft_recursive_power(atoi(argv[1])));
}
*/
