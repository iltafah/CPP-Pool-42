/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:05:11 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/30 12:48:21 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137), _target("NONE")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj)
{
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm & obj)
{
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream outputFile(_target + "_shrubbery");

	if (outputFile.good())
	{
		outputFile <<	"          .     .  .      +     .      .          .				\n";
		outputFile <<	"     .       .      .     #       .           .					\n";
		outputFile <<	"        .      .         ###            .      .      .			\n";
		outputFile <<	"      .      .   \"#:. .:##\"##:. .:#\"  .      .					\n";
		outputFile <<	"          .      . \"####\"###\"####\"  .							\n";
		outputFile <<	"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .	\n";
		outputFile <<	"  .             \"#########\"#########\"        .        .			\n";
		outputFile <<	"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .			\n";
		outputFile <<	"     .     .  \"#######\"\"##\"##\"\"#######\"                  .	\n";
		outputFile <<	"                .\"##\"#####\"#####\"##\"           .      .		\n";
		outputFile <<	"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .			\n";
		outputFile <<	"      .     \"#######\"##\"#####\"##\"#######\"      .     .		\n";
		outputFile <<	"    .    .     \"#####\"\"#######\"\"#####\"    .      .			\n";
		outputFile <<	"            .     \"      000      \"    .     .					\n";
		outputFile <<	"       .         .   .   000     .        .       .				\n";
		outputFile <<	".. .. ..................O000O........................ ......		\n";
		outputFile.close();
	}	
}
