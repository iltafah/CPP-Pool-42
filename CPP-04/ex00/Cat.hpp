/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:37:46 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/13 16:23:34 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "./Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& givenObj);
		~Cat();
		void operator = (const Cat& giveObj);
		void makeSound() const;

};

#endif
