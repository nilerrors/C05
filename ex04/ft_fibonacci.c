/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senayat <senayat@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:31:12 by senayat           #+#    #+#             */
/*   Updated: 2024/02/22 23:33:21 by senayat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	return (1);
	printf("%s!: %d\n", argv[1], ft_fibonacci(atoi(argv[1])));
}
*/
