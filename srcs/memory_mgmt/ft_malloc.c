/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <pde-rent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 15:10:35 by pde-rent          #+#    #+#             */
/*   Updated: 2017/05/17 09:17:59 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_mgmt.h"
#include "output_mgmt.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*const mem = malloc(count * size);

	if (mem == (void *)0)
		ft_putstr_fd("ERROR\tft_calloc : Malloc failed\n", 2);
	else
		ft_bzero(mem, size * count);
	return (mem);
}

void	ft_exit(char const *const fnc, char const *const str)
{
	ft_putstr_fd("ERROR\tCritical failure in function ", 2);
	ft_putstr_fd(fnc, 2);
	ft_putstr_fd(". The program will exit, reason being : ", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd(".\n", 2);
	exit(1);
}

void	*ft_safe_calloc(size_t count, size_t size)
{
	void	*const mem = malloc(count * size);

	if (mem == (void *)0)
		ft_exit("ft_safe_calloc", "Out of memory (Malloc failed)");
	ft_bzero(mem, count * size);
	return (mem);
}
