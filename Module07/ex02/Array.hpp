/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:12:18 by maclara-          #+#    #+#             */
/*   Updated: 2023/08/07 21:17:36 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <exception>
# include <iostream>

template<typename T>
class Array
{
private:
	T *array_done;
	unsigned int size_array;

public:

	Array(void): array_done(new T()), size_array(0) {
	};
	
	~Array(void) {
		delete [] array_done;
	}

    Array(const Array& other) : array_done(new T[other.size()]), size_array(other.size()) {
        for ( unsigned int i( 0 ); i < size_array; i++ )
            array_done[i] = other.array_done[i];
    };

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete [] array_done;
            array_done = new T[other.size()];
            size_array = other.size_array;
            for ( unsigned int i( 0 ); i < size_array; i++ )
                array_done[i] = other.array_done[i];
        }
        return *this;
    }

	Array(unsigned int n) : array_done(new T[n]), size_array(n) {
	};

	unsigned int  size(void) const {
		return size_array;
	}

    T& operator[]( unsigned int i ) const {
        if ( i >= size_array )
            throw Array::IndexErrorException();

        return array_done[i];
    }

	class IndexErrorException : public std::exception
	{
	public:
		const char* what() const throw(){
			return "Error: Index is out of the limits!";
		}
	};
};

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& arr ) {
    for ( unsigned int i( 0 ); i < arr.size(); i++ )
        out << arr[i] << " ";
    return out;
}

#endif
