#include "contact.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

void Contact::fillFrom() {
	std::cout << "Please fill the following informations." << std::endl;
	std::cout << std::setw(17) << "First name  ";
	std::getline(std::cin, _firstName);
	std::cout << std::setw(17) << "Last name  ";
	std::getline(std::cin, _lastName);
	std::cout << std::setw(17) << "Nickname  ";
	std::getline(std::cin, _nickname);
	std::cout << std::setw(17) << "Phone number  ";
	std::getline(std::cin, _phoneNumber);
	std::cout << std::setw(17) << "Darkest secret  ";
	std::getline(std::cin, _darkestSecret);
}

static void printColumn(std::string str) {
	int len;

	len = str.length();
	if (len <= 10)
		std::cout << std::setw(10 - len) << str;
	else
		std::cout << str.substr(0, 9) << '.';
}

void Contact::showContact(int index) {
	printColumn(std::to_string(index));
	std::cout << "|";
	printColumn(_firstName);
	std::cout << "|";
	printColumn(_lastName);
	std::cout << "|";
	printColumn(_nickname);
	std::cout << std::endl;
}

void Contact::showContactDetail() {
	std::cout << std::endl;
	std::cout << _firstName << std::endl;
	std::cout << _lastName << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phoneNumber << std::endl;
	std::cout << _darkestSecret << std::endl;
}
