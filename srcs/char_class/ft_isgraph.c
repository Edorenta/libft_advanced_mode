/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <pde-rent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 22:10:21 by pde-rent          #+#    #+#             */
/*   Updated: 2017/11/25 22:11:01 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isgraph(int c)
{
	return (' ' < c && c <= '~');
}
