/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:42:06 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/03 19:37:05 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		void complain( std::string level );
};

typedef void (Karen::*KarenMemberPtr)(void);
typedef enum e_msg {DEBUG, INFO, WARNING, ERROR} t_msg;
# define CALL_MEMBER_FN(object, ptrToMember) ((object).*(ptrToMember))

#endif
