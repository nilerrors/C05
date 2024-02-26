/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:15:32 by senayat           #+#    #+#             */
/*   Updated: 2024/02/22 23:20:07 by senayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nbr)
{
	if (nbr < 0)
		return (0);
	if (nbr <= 1)
		return (1);
	return (nbr * ft_recursive_factorial(nbr - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	return (1);
	printf("%s!: %d\n", argv[1], ft_recursive_factorial(atoi(argv[1])));
}
*/
