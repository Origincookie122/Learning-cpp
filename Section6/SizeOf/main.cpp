#include <iostream>
#include <string>

using std::string;

int main() {
	int userAge {0};
	string userName {"unknown"};
	
	std::cout << ("What is your age?: ");
	std::cin >> userAge;
	
	std::cout << ("What is your name?: ");
	std::cin >> userName;
	
	std::cout << ("Your name is ") << userName << (" and you are ") << userAge << (" years old!") << std::endl;
	std::cout << ("The size of the variable 'userAge' is: ") << sizeof(userAge) << (" bytes") << std::endl;
	std::cout << ("The size of the variable 'userName' is: ") << sizeof(userName) << (" bytes") << std::endl;
	return 0;
}