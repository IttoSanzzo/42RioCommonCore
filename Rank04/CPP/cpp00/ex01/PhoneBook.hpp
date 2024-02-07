/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:55:29 by marcosv2          #+#    #+#             */
/*   Updated: 2024/02/06 21:48:08 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_PHONEBOOK_HPP
# define CPP00_PHONEBOOK_HPP

# include "Contact.hpp"
# ifndef MAX_CAP
#  define MAX_CAP	8
# endif
# if (MAX_CAP < 1 || MAX_CAP > 21470)
# pragma message	"MAX_CAP set to unsupported value... redefinig to 8!"
# undef MAX_CAP
# define MAX_CAP	8
# endif

class PhoneBook {
	private:
		Contact contacts[MAX_CAP];
		int		capacity;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	SetCapacity(int capacity);
		void	SetContact(Contact contact, int i);
		int		GetCapacity(void) const;
		Contact	GetContact(int i) const;
};

#endif