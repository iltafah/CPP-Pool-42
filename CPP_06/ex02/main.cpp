/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:05:53 by iltafah           #+#    #+#             */
/*   Updated: 2021/12/08 23:56:51 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Base.hpp"
#include "./A.hpp"
#include "./B.hpp"
#include "./C.hpp"

typedef Base * (*clonePtrs) ();

Base * cloneA(void)
{
	Base *ptr = new A;

	return (ptr);
}

Base * cloneB(void)
{
	Base *ptr = new B;

	return (ptr);
}

Base * cloneC(void)
{
	Base *ptr = new C;

	return (ptr);
}

Base * generate(void)
{
	int index = rand() % 3;
	clonePtrs ptrToFunc[3] = {
		&cloneA,
		&cloneB,
		&cloneC
	};

	return (ptrToFunc[index]());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "it is A class" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "it is B class" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "it is C class" << std::endl;
}

void identify(Base& p)
{
	try
	{
		Base a = dynamic_cast<A&>(p);
	}
	catch (const std::exception& e)
	{
		try
		{
			Base b = dynamic_cast<B&>(p);
		}
		catch(const std::exception& e)
		{
			try
			{
				Base c = dynamic_cast<C&>(p);
			}
			catch(const std::exception& e)
			{
				return ;
			}
			std::cout << "it is a C class" << std::endl;
			return ;
		}
		std::cout << "it is a B class" << std::endl;
		return ;
	}
	std::cout << "it is a A class" << std::endl;
	return ;
}

int main()
{
	srand (time(NULL));

	std::cout << "Pointer Time:" << std::endl;
	Base *basePtr = generate();
	identify(basePtr);
	delete basePtr;

	std::cout << std::endl;

	std::cout << "Reference Time:" << std::endl;
	C obj;
	identify(obj);
	return (0);
}
