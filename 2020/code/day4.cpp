#include <iostream>
#include <string>
#include <vector>
#include <fstream>

std::string input;
std::string thing;
int i = 0;
int liness = 0;
int main() {
	std::ifstream file("../input/day4.txt");
	//count lines and create array
	while (getline(file, thing)) {
		liness++;
	
	}
	const int lines = liness;
	
	std::string fullinput[lines] = { };

	while (getline(file, input)) {
		if (input.size() > 0) {
			fullinput[i] = input;
			std::cout << fullinput[i] << std::endl;
		}
		else {
			i++;
			std::cout << "Yes!" << std::endl;
		}

	}
	for (int k = 0; k > fullinput.size(); k++) {
		std::cout << fullinput[k];
	}
}
