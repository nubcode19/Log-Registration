#include <iostream>
#include <string>
#include <fstream>

std::string signCreate(std::string makeUser, std::string makePass) {

	std::ofstream makeAcc("acc." + makeUser + ".txt");
	makeAcc << makeUser << "\n" << makePass;
	makeAcc.close();


	return makeUser;
	return makePass;
}