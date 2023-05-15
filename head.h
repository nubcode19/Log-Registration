#pragma once
#include <iostream>
#include <string>
#include <fstream>

std::string Limit(std::string userLimit, std::string passLimit);
bool Confirm(std::string userConfirm, std::string passConfirm);
bool notConfirm();
std::string signCreate(std::string makeUser, std::string makePass);
bool logConfirm(std::string confirmUser, std::string confirmPass);
