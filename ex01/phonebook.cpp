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
	contacts[current].fillFrom();
	if (current < MAX_CONTACTS - 1)
		current++;
}

void Phonebook::search(void) {
	std::string selected;
	int selectedNum;
	int i = 0;
	if (current == 0) {
		std::cout << "You don't have any contact yet." << std::endl;
		return;
	}
	while (i < current) {
		contacts[i].showContact(i);
		i++;
	}
	std::cout << std::endl
			  << "Type a number to see Detail of a contact" << std::endl;
	std::getline(std::cin, selected);
	std::cout << selected << std::endl;
	try {
		selectedNum = std::stoi(selected);
		std::cout << selectedNum << std::endl;
		if (0 <= selectedNum && selectedNum < current)
			contacts[selectedNum].showContactDetail();
	} catch (const std::exception &e) {
		std::cerr << "Type valid number" << std::endl;
	}
}
