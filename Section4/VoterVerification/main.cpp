#include <iostream>

using namespace std;

int main() {
	int userAge;
	
	std::cout << ("What is your age?: ");
	
	std::cin >> userAge;
	
	if(userAge >= 18) {
		std::cout << ("You are able to vote") << std::endl;
	} else {
		std::cout << ("You are not able to vote") << std::endl;
	}
	
	return 0;
}