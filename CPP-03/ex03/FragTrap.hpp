/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:52:37 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/11 17:26:57 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& givenObj);
		void	operator=(const FragTrap& givenObj);
		FragTrap(std::string givenName);
		~FragTrap();
		void highFivesGuys(void);
};

#endif
