/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:25:23 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/27 11:54:39 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replace_content(const std::string& source, const std::string& s1, const std::string& s2)
{
	std::string new_content;
	size_t last_pos = 0;
	size_t pos = source.find(s1, last_pos);

	while (pos < source.length())
	{
		new_content.append(source, last_pos, pos - last_pos);
		new_content += s2;
		last_pos = pos + s1.length();
		pos = source.find(s1, last_pos);
	}
	new_content.append(source, last_pos, source.length() - last_pos);
	return (new_content);
}

std::string read_file(const std::string& filename)
{
	std::ifstream infile(filename.c_str());
	if (!infile)
		throw std::runtime_error("Could not open file " + filename);
	std::string content, line;
	while (std::getline(infile, line))
	{
		content += line;
		if (!infile.eof())
			content += "\n";
	}
	infile.close();
	return (content);
}

void write_file(const std::string& filename, const std::string& content)
{
	std::ofstream outfile(filename.c_str());
	if (!outfile)
		throw std::runtime_error("Could not open file " + filename);
	outfile << content;
	outfile.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage : " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	try
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		std::string file_content = read_file(filename);
		std::string new_content = replace_content(file_content, s1, s2);
		write_file(filename + ".replace", new_content);
	}
	catch (std::runtime_error& error)
	{
		std::cerr << error.what() << std::endl;
		return (1);
	}

	return (0);
}
