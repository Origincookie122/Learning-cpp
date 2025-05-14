#include <iostream>

using namespace std;

int main() {
	
	int userFavoriteNumber;
	
	std::cout << ("Enter your favorite number between 1 and 100: ");
	
	std::cin >> userFavoriteNumber;
	std::cout << ("Amazing!! That's my favorite number too!") << std::endl;
	std::cout << ("No really!!, ") << userFavoriteNumber << (" is my favorite number!") << std::endl;
	
	return 0;
}