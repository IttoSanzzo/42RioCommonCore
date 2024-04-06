/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 03:47:53 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/05 22:32:48 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main( void ){
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("OTHERS");

	return (0);
}