#include <iostream>
#include <fstream>
#include <string>

bool notConfirm() {

	std::string signUser, signPass;
	bool confrimStat;
	std::cout << "Please enter a new username and a new password\n|Username|: "; std::cin >> signUser;
	std::cout << "|Password|: "; std::cin >> signPass;

	signUser.size(); signPass.size();
	if (signUser.size() > 10 && signPass.size() > 16) {
		while (true) {
			signUser.size(); signPass.size();
			std::cout << "\n!!|Error|!!\n|Username exceed 10 chars|\n|Password exceeds 16 char|\n\n|Username|: "; std::cin >> signUser;
			std::cout << "|Password|: "; std::cin >> signPass;
			if (signUser.size() <= 10 && signPass.size() <= 16) {
				break;
			}
			else if (signUser.size() > 10 && signPass.size() <= 16) {
				while (true) {
					signUser.size();
					std::cout << "\n!!|Error|!!\n|Username exceed 10 chars|\n\n|Username|: "; std::cin >> signUser;
					if (signUser.size() <= 10) { break; }
				}
				break;
			}
			else if (signUser.size() <= 10 && signPass.size() > 16) {
				while (true) {
					signPass.size();
					std::cout << "\n!!|Error|!!\n|Password exceeds 16 char|\n\n|Password|: "; std::cin >> signPass;
					if (signPass.size() <= 16) { break; }
				}
				break;
			}
		}
	}
	else if (signUser.size() > 10 && signPass.size() <= 16) {
		while (true) {
			signUser.size();
			std::cout << "\n!!|Error|!!\n|Username exceed 10 chars|\n\n|Username|: "; std::cin >> signUser;
			if (signUser.size() <= 10) { break; }
		}
	}
	else if (signUser.size() <= 10 && signPass.size() > 16) {
		while (true) {
			signPass.size();
			std::cout << "\n!!|Error|!!\n|Password exceeds 16 char|\n\n|Password|: "; std::cin >> signPass;
			if (signPass.size() <= 16) { break; }
		}
	}

	std::string userFile;
	std::ifstream readfile("acc." + signUser + ".txt");
	getline(readfile, userFile);
	userFile.find(signUser);

	std::string user, pass;
	if (userFile.find(signUser) == std::string::npos) {
		std::cout << "\n\nUsername valid | Password valid\nPls confirm: \n|Username|: "; std::cin >> user;
		std::cout << "|Password|: "; std::cin >> pass;
		while (user != signUser && pass != signPass) {
			std::cout << "\nUsername not same | Password not same\n|Username|: "; std::cin >> user;
			std::cout << "|Password|: "; std::cin >> pass;
		}
		while (user != signUser && pass == signPass) {
			std::cout << "\nUsername not same | Password confirmed\n|Username|: "; std::cin >> user;
		}
		while (user == signUser && pass != signPass) {
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