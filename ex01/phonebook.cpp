#include "phonebook.hpp"

Phonebook::Phonebook(void) {
	current = 0;
}

Phonebook::~Phonebook(void) {
}

std::string Phonebook::readline(std::string prompt) {
	std::string line;

	while (true) {
		std::cout << prompt;
		std::getline(std::cin, line);
		if (std::cin.eof() || std::cin.bad()) {
			std::cout << std::endl
					  << "Error" << std::endl;
			exit(EXIT_FAILURE);
		}
		if (std::cin.fail()) {
			std::cout << std::endl
					  << "Invalid string, try again." << std::endl;
			continue;
		}
		break;
	}
	return (line);
}

void Phonebook::add(void) {
	std::cout << "add called" << std::endl;
	contacts[current].fillFrom();
	if (current < MAX_CONTACTS - 1)
		current++;
}

void Phonebook::search(void) {
	std::string selected;
	int selectedNum;
	int i = 0;
	std::cout << "search called" << std::endl;
	if (current == 0) {
		std::cout << "You don't have any contact yet." << std::endl;
		return;
	}
	while (i <= current) {
		contacts[i].showContact(i);
		i++;
	}
	std::cout << "Type a number to see Detail of a contact" << std::endl;
	std::getline(std::cin, selected);
	selectedNum = std::stoi(selected);
	if (0 <= selectedNum && selectedNum < current)
		contacts[selectedNum].showContactDetail();
}
