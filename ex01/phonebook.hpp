#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

//# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

const int	PAGE_NUM = 8;
const int	PAGE_LAST = 7;
const int	START = -1;

class Phonebook {
private:
//	Contact	page[PAGE_NUM];
//	int		top;

public:
	Phonebook(void);
	~Phonebook(void);
	std::string	readline(std::string prompt);
//	void	interact(void);
	void	add(void);
	void	show(void);
	void	search(void);
};

#endif
