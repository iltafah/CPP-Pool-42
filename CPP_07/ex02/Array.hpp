/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:53:43 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/10 23:48:57 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T *_elements;
		size_t _size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		~Array();
	
	public:
		T & operator [] (size_t index) const;
		Array & operator = (const Array &obj);

	public:
		size_t size() const;
};

template<typename T>
Array<T>::Array() : _size(0)
{
	_elements = nullptr;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_elements = new T[n];
}

template<typename T>
Array<T>::Array(const Array &obj) : _size(0), _elements(nullptr)
{
	*this = obj;
}

template<typename T>
Array<T>::~Array()
{
	delete[] _elements;
}

template<typename T>
Array<T> & Array<T>::operator = (const Array &obj)
{
	if (this != &obj)
	{
		delete[] this->_elements;
		this->_elements = nullptr;
		this->_size = obj.size();
		if (obj._elements != nullptr)
		{
			this->_elements = new T[obj.size()];
			std::copy(obj._elements, obj._elements + obj.size(), this->_elements);
		}
	}
	return (*this);
}

template<typename T>
T & Array<T>::operator [] (size_t index) const
{
	if (index >= this->_size)
		throw std::runtime_error("Invalid Index");
	return (this->_elements[index]);
}

template<typename T>
size_t Array<T>::size() const
{
	return (this->_size);
}

#endif
