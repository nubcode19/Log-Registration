#include <iostream>
#include <string>
#include <fstream>

bool logConfirm(std::string confirmUser, std::string confirmPass) {

	std::string userFile, passFile;
	int guessTry = 0;
	bool outOfGuess = false;

	std::ifstream checkUser("acc." + confirmUser + ".txt");
	getline(checkUser, userFile);
	getline(checkUser, passFile);
	userFile.find(confirmUser); 
	passFile.find(confirmPass);

	if (userFile.find(confirmUser) == std::string::npos) {
		std::cout << "\n\n!| Sorry but this username is not registered |!\n\n";
		return false;
	}
	else if (userFile.find(confirmUser) != std::string::npos && passFile.find(confirmPass) == std::string::npos) {
		std::cout << "\n\nUsername Valid | Password Incorrect\n";
		while (true && !outOfGuess) {
			if (guessTry < 4) {
				userFile.find(confirmPass);
				std::cout << "|Username|: " << confirmUser << "\n";
				std::cout << "|Password|: "; std::cin >> confirmPass;
				if (userFile.find(confirmPass) != std::string::npos) {
					break;
				}
				std::cout << "\n| Password Incorrect |\n";
				guessTry++;
			}
			else {
				outOfGuess = true;
				break;
			}
		}
		if (outOfGuess) {
			std::cout << "\n\n!!| ERROR |!!\n| Number of Attempts exceeded! |\n| Exiting Terminal... |\n\n";
			return false;
		}
		else {
			return true;
		}
	}
	else {
		return true;
	}
}