/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:51:43 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/05 02:27:12 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int ft_readcontent(const char *filename, std::string& content) {
	std::ifstream	file(filename);
	if (file.fail())
		return (1);
	std::stringstream	file_content;
	file_content << file.rdbuf();
	content = file_content.str();
	file.close();	
	return (0);
}

void ft_sedl(std::string& oldstr, std::string& newstr, std::string& content) {
	if (newstr == oldstr)
		return ;
	std::string::size_type	found_p = content.find(oldstr, 0);
	while (found_p != std::string::npos) {
		content.erase(found_p, oldstr.length());
		content.insert(found_p, newstr);
		found_p = content.find(oldstr, found_p + newstr.length());
	}	
}

int ft_output(std::string& filename, std::string& content) {
	/// Name gen
	std::string::size_type	ending = filename.find_last_of('.');
	std::string	rep_filename;
	if (ending != std::string::npos)
		rep_filename = filename.substr(0,ending) + ".replace";
	else
		rep_filename = filename + ".replace";
		
	/// File creation and population
	std::ofstream	file(rep_filename.c_str());
	if (file.fail())
		return (1);
	file << content;
	file.close();
	return (0);
}

int main(int ac, char *av[]) {
	
	/// Argument check
	if (ac < 4)
		return (std::cout << "Missing arguments. (" << av[0] << " <file_name> <find> <replace>)" << std::endl, 1);
	else if (ac > 4)
		return (std::cout << "Too many arguments. (" << av[0] << " <file_name> <find> <replace>)" << std::endl, 1);
	std::string	oldstr(av[2]);
	if (oldstr.empty())
		return (std::cout << "Not a replaceable string." << std::endl, 1);
	std::string	newstr(av[3]);
	std::string	filename(av[1]);

	/// Opening file and getting the content
	std::string content;
	if (ft_readcontent(filename.c_str(), content))
		return (std::cout << "File not found." << std::endl, 1);

	/// Replacing Algorithm
	ft_sedl(oldstr, newstr, content);
	if (ft_output(filename, content))
		return (std::cout << "Couldn't create replace file! Aborting..." << std::endl, 1);
	return (0);
}