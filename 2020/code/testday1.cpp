#include <fstream>
#include <string>
#include <iostream>


void main() {
	std::ifstream inFile("");
	int a;
	int b = 0;
	int c = 0;
	
	while (inFile >> a)
	{
		a = ceil(a / 3) - 2;
		b += a;
		c = a;
		
		while (c >= 0)
		{
			c = ceil(c / 3) - 2;
			if (c > 0) {
				b += c;
			}
			
		}

	}
std::cout << b;
}