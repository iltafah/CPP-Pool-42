/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:35:41 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/09 17:57:50 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data* deserialize(uintptr_t raw)
{
	Data *s = reinterpret_cast<Data*>(raw);
	return (s);
}

int		main()
{
	Data		myDataStruct;
	uintptr_t	ptrAsInt;

	myDataStruct.num = 1337;
	std::cout << "Address of Data struct is : ";
	std::cout << &myDataStruct << std::endl << std::endl;

	std::cout << "Address of Data struct casted to uintptr_t : ";
	ptrAsInt = serialize(&myDataStruct);
	std::cout << ptrAsInt << std::endl << std::endl;

	std::cout << "Cast uintptr_t back to Data pointer: ";
	Data *ptrToCastedInt = deserialize(ptrAsInt);
	std::cout << ptrToCastedInt << std::endl << std::endl;

	std::cout << "Value of the first element in the Datat struct : ";
	std::cout << ptrToCastedInt->num << std::endl;

	return (0);
}
