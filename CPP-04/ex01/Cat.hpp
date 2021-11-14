/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:37:46 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 09:12:27 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "./Animal.hpp"
# include "./Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;

	public:
		Cat();
		Cat(const Cat& givenObj);
		~Cat();
		void operator = (const Cat& givenObj);
		void makeSound() const;
};

#endif
