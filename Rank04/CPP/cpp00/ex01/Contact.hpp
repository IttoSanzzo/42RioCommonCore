/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:20:13 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/05 23:32:25 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_CONTACT_HPP
# define CPP00_CONTACT_HPP

#ifndef CPP00_STRING
# define CPP00_STRING
# include <string>
#endif

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret);
		~Contact(void);
		void		SetFirstName(std::string first_name);
		void		SetLastName(std::string last_name);
		void		SetNickname(std::string nickname);
		void		SetPhoneNumber(std::string phone_number);
		void		SetDarkestSecret(std::string darkest_secret);
		std::string	GetFirstName(void) const;
		std::string	GetLastName(void) const;
		std::string	GetNickname(void) const;
		std::string	GetPhoneNumber(void) const;
		std::string	GetDarkestSecret(void) const;
};

#endif