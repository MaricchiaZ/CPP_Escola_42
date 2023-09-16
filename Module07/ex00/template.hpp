/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:36:57 by maclara-          #+#    #+#             */
/*   Updated: 2023/08/07 20:31:45 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T> 
void swap ( T &a, T &b)
{
    T x;
        x = a;
        a = b;
        b = x;
}

template <typename T> 
T min(T a , T b)
{
    if(a < b)
        return a;
    return b;
}

template <typename T> T max(T a, T b)
{
    if(a > b)
        return a;
    return b;
}

#endif
