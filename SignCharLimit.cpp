#include <iostream>

std::string Limit(std::string userLimit, std::string passLimit) {
	userLimit.size(); passLimit.size();

	if (userLimit.size() > 10 && passLimit.size() > 16) {
		while (true) {
			userLimit.size(); passLimit.size();
			std::cout << "\n!!|Error|!!\n|Username exceed 10 chars|\n|Password exceeds 16 char|\n\n|Username|: "; std::cin >> userLimit;
			std::cout << "|Password|: "; std::cin >> passLimit;
			if (userLimit.size() <= 10 && passLimit.size() <= 16) { 
				break;
			}
			else if (userLimit.size() > 10 && passLimit.size() <= 16) {
				while (true) {
					userLimit.size();
					std::cout << "\n!!|Error|!!\n|Username exceed 10 chars|\n\n|Username|: "; std::cin >> userLimit;
					if (userLimit.size() <= 10) { break; }
				}
				break;
			}
			else if (userLimit.size() <= 10 && passLimit.size() > 16) {
				while (true) {
					passLimit.size();
					std::cout << "\n!!|Error|!!\n|Password exceeds 16 char|\n\n|Password|: "; std::cin >> passLimit;
					if (passLimit.size() <= 16) { break; }
				}
				break;
			}
		}
	}
	else if (userLimit.size() > 10 && passLimit.size() <= 16) {
		while (true) {
			userLimit.size();
			std::cout << "\n!!|Error|!!\n|Username exceed 10 chars|\n\n|Username|: "; std::cin >> userLimit;
			if (userLimit.size() <= 10) { break; }
		}
	}
	else if (userLimit.size() <= 10 && passLimit.size() > 16) {
		while (true) {
			passLimit.size();
			std::cout << "\n!!|Error|!!\n|Password exceeds 16 char|\n\n|Password|: "; std::cin >> passLimit;
			if (passLimit.size() <= 16) { break; }
		}
	}
	else {
		return userLimit, passLimit;
		
	}

	return userLimit, passLimit;
}