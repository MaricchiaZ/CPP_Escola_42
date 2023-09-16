/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:45:36 by maclara-          #+#    #+#             */
/*   Updated: 2023/08/07 21:17:09 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *arr, int len, void(*func)(T const &ref))
{
	if (arr == NULL || len == 0 || func == NULL)
		return ;
	
	for (int i = 0; i < len; i++)
		func(arr[i]);
}


template<typename T>
void print(T const & p)
{
	std::cout << p << std::endl;
}

#endif
