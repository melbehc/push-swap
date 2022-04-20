/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-behc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:49:08 by mel-behc          #+#    #+#             */
/*   Updated: 2022/04/20 01:50:33 by mel-behc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	read_args(char *arg)
{
	long	number;

	number = ft_atol(arg);
	if (number > 2147483647 || number < -2147483648)
		error_function();
	return (number);
}
