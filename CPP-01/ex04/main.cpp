/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltafah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:03:57 by iltafah           #+#    #+#             */
/*   Updated: 2021/11/14 17:21:44 by iltafah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./replace.hpp"

int		printError(std::string errorMsg)
{
	std::cout << errorMsg << std::endl;
	return (ERROR);
}

int		checkErrors(int argsCount, char** args)
{
	if (argsCount != 3)
		return (printError("Error: Wrong number of arguments!"));
	if (args[0][0] == '\0' || args[1][0] == '\0' || args[2][0] == '\0')
		return (printError("Error: An empty string within arguments!"));
	return (SUCCESS);
}

int		createOutputFile(std::ofstream &outputFile, std::string OFName)
{
	outputFile.open(OFName, std::ofstream::trunc);
	if (outputFile.fail())
		return (printError("Error: Faild to create output file!"));
	return (SUCCESS);
}

void	replaceOccurrences(std::string &currLine, char* toReplace, char* replaceWith)
{
	int			index;

	index = 0;
	while ((index = currLine.find(toReplace, index)) != currLine.npos)
	{
		currLine.erase(index, strlen(toReplace));
		currLine.insert(index, replaceWith);
		index += strlen(replaceWith);
	}
}

void	replaceAndWrite(std::ifstream &inputFile, std::ofstream &outputFile,
				char *toReplace, char *replaceWith)
{
	std::string	currLine;

	while (inputFile.good())
	{
		std::getline(inputFile, currLine);
		replaceOccurrences(currLine, toReplace, replaceWith);
		outputFile << currLine;
		if (inputFile.eof() == false)
			outputFile << std::endl;
	}
}

int		main(int argc, char** argv)
{
	if (checkErrors(argc - 1, argv + 1) == SUCCESS)
	{
		std::ofstream	outputFile;
		std::ifstream	inputFile(argv[1]);

		if (inputFile.fail())
			return (printError("Error: Couldn't open the given file!"));
		if (createOutputFile(outputFile, "FILENAME.replace") == ERROR)
			return (0);
		replaceAndWrite(inputFile, outputFile, argv[2], argv[3]);
		outputFile.close();
		inputFile.close();
	}
	return (0);
}
