/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:25:33 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 09:12:24 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "./Animal.hpp"
# include "./Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog& givenObj);
		~Dog();
		void operator = (const Dog& givenObj);
		void makeSound() const;
};

#endif
