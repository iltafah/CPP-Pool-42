/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:23:59 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 10:25:03 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"
#include "./Brain.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	delete j;//should not create a leak
    delete i;
	return (0);
}
