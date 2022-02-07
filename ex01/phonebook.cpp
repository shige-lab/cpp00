#include "phonebook.hpp"

Phonebook::Phonebook(void) {
}

Phonebook::~Phonebook(void) {
}

std::string Phonebook::readline(std::string prompt) {
	std::string input;

	while (true) {
		std::cout << prompt;
		std::getline(std::cin, input);
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
	return (input);
}

void Phonebook::add(void) {
	std::cout << "add called" << std::endl;
}

void Phonebook::show(void) {
	std::cout << "show called" << std::endl;
}

void Phonebook::search(void) {
	std::cout << "search called" << std::endl;
}
