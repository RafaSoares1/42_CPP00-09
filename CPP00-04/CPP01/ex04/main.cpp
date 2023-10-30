/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:54:14 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/30 17:23:57 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace_line(std::string line, std::string s1, std::string s2)
{
	size_t i = 0;
	while(1)
	{
		i = line.find(s1, i);
		if(i == std::string::npos)
			break;
		line.erase(i, s1.length());
		line.insert(i, s2);
		i += s2.length();
	}
	return line;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cerr << "ERROR: invalid number of arguments!" << std::endl, 2);
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	std::ifstream inputFile;
	inputFile.open(filename.c_str());
	if (!inputFile.is_open())
		return (std::cerr << "Failed to open the file: " << filename <<std::endl, 2);
	
	std::string newfile = filename + ".replace";
	std::ofstream outputFile;
	outputFile.open(newfile.c_str());
	if (!outputFile.is_open())
		return (std::cerr << "Failed to open the file: " << newfile <<std::endl, 2);
	
	std::string line;
	while(std::getline(inputFile, line))
	{
		line = replace_line(line, s1, s2);
		outputFile << line << std::endl;
	}
	inputFile.close();
  outputFile.close();
	
	std::cout << "File processed and saved as: " << newfile << std::endl;

	return 0;
}
