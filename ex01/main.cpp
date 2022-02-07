#include "phonebook.hpp"

int main(void) {
	Phonebook pb;
	std::string line;

	while (true) {
		line = pb.readline("type command> ");
		if (line == "EXIT")
			break;
		else if (line == "ADD")
			pb.add();
		else if (line == "SEARCH")
			pb.search();
	}
	return (0);
}
