#include "head.h"

void signUp() {

	std::string signUser, signPass;
	bool stat;
	std::cout << "\nPlease create a username and password\n|Username|: "; std::cin >> signUser;
	std::cout << "|Password|: "; std::cin >> signPass;

	Limit(signUser, signPass);
	stat = Confirm(signUser, signPass);
	if (!stat) {
		while (true) {
			stat = notConfirm();
			if (stat) {
				break;
			}
		}
	}
	signCreate(signUser, signPass);

	return;
}

bool LogIn() {
	std::string logUser, logPass;
	bool logStat;
	std::cout << "\n|Please log in with your username and password|\n|Username|: "; std::cin >> logUser;
	std::cout << "|Password|: "; std::cin >> logPass;

	logStat = logConfirm(logUser, logPass);

	return logStat;
}

int main() {
	std::string mainInput, mainInputTwo;
	bool log;
	std::cout << "|Welcome to the Metaverse!|\n |Press| 1 to LogIn - |Press| 2 to SignUp\n -:"; std::cin >> mainInput;
	
	while (mainInput != "1" && mainInput != "2") { std::cout << "Invalid option!\n-:"; std::cin >> mainInput; }
	if (mainInput == "1") {
		log = LogIn();
		if (log) {
			std::cout << "\n\n\n|| Successfully Logged In! ||\n\n";
		}
		else {
			std::cout << "Do you wanna make an account instead?\n|Press| 1 if Yes - |Press| 2 if No\n-: ";
			std::cin >> mainInputTwo;
			while (mainInputTwo != "1" && mainInputTwo != "2") { std::cout << "Invalid option!\n-:"; std::cin >> mainInputTwo; }
			if (mainInputTwo == "1") {
				signUp();
			}
			else {
				std::cout << "\n\nOk bye\n\n";
			}
		}
	}
	else {
		std::cout << "\n|ACCOUNT CREATION|\n";
		signUp();
		std::cout << "\n\n\n|| Account successfully created! ||\n\n";
	}

	return 0;
}