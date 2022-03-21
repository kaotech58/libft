/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:14:15 by teiffe            #+#    #+#             */
/*   Updated: 2021/10/19 11:05:21 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks if c is a digit
 * it returns a 0 for false or a 1 for true */
int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
