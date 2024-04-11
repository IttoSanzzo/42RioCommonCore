/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:49:38 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/11 18:27:43 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP

#include "iostream"

class Brain {
	private:
		std::string	ideas[100];
	public:
		~Brain(void);
		Brain(void);
		Brain(const Brain& src);
		Brain&	operator=(const Brain& src);
};

#endif