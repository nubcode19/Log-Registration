#include <iostream>
#include <fstream>
#include <string>

bool Confirm(std::string userConfirm, std::string passConfirm) {

	std::string userFile;
	std::ifstream readfile("acc." + userConfirm + ".txt");
	getline(readfile, userFile);
	userFile.find(userConfirm);

	std::string user, pass;
	if (userFile.find(userConfirm) == std::string::npos) {
		std::cout << "\n\nUsername valid | Password valid\nPls confirm: \n|Username|: "; std::cin >> user;
		std::cout << "|Password|: "; std::cin >> pass;
		while (user != userConfirm && pass != passConfirm) {
			std::cout << "\nUsername not same | Password not same\n|Username|: "; std::cin >> user;
			std::cout << "|Password|: "; std::cin >> pass;
		}
		while (user != userConfirm && pass == passConfirm) {
			std::cout << "\nUsername not same | Password confirmed\n|Username|: "; std::cin >> user;
		}
		while (user == userConfirm && pass != passConfirm) {
			std::cout << "\nUsername confirmed | Password not same\n|Username|: " << user << "\n";
			std::cout << "|Password|: "; std::cin >> pass;
		}
		return true;
	}
	else {
		std::cout << "\n\n|This account is already registered|\n\n";
		return false;
	}

}