#include <iostream>
#include <string>
#include <vector>
#include <fstream>

std::string input;
std::string thing;
int i = 0;
int lines = 0;
int a = 0;
int f = 0;
int main() {
	std::cout << "kek" << std::endl;
	std::ifstream file("../input/day4.txt");
	//count passports
	while (getline(file, thing)) {
		if (thing.size() == 0) {
			f++;
		}
	}
	std::cout << f << std::endl;
	std::ifstream filee("../input/day4.txt");
	std::cout << lines << std::endl;


	std::string* fullinput = new std::string[f + 1]{ };
	while (getline(filee, input)) {
		if (input.size() > 0) {
			fullinput[i] += " " + input;
		}
		else {
			std::cout << fullinput[i] << i << "feg" << std::endl;
			i++;
		}
	}
	std::cout << fullinput[i] << i << "mög" << std::endl;
	std::cout << fullinput[256] << i << "cringe" <<  std::endl;
		for (int k = 0; k < f; k++) {
			if (fullinput[k].find("byr") != std::string::npos && fullinput[k].find("iyr") != std::string::npos && fullinput[k].find("eyr") != std::string::npos && fullinput[k].find("hgt") != std::string::npos && fullinput[k].find("hcl") != std::string::npos && fullinput[k].find("ecl") != std::string::npos && fullinput[k].find("pid") != std::string::npos) {
				a++;

			}

		}
		std::cout << "Correct passports: " << a << std::endl;


	}

//