#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

#define MAX_CONTACTS 8

class Phonebook {
private:
	Contact contacts[MAX_CONTACTS];
	int current;

public:
	Phonebook(void);
	~Phonebook(void);
	std::string readline(std::string prompt);
	void add(void);
	void search(void);
};

#endif
