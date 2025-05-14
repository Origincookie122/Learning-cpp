#include <iostream>

int main() {
	int roomLength {0};
	int roomWidth {0};
	int roomSquareFootage {0};
	
	std::cout << ("What is the room length?: ");
	std::cin >> roomLength;
	
	std::cout << ("What is the room width?: ");
	std::cin >> roomWidth;
	
	roomSquareFootage = roomLength * roomWidth;
	
	std::cout << ("The square footage of your room is: ") << roomSquareFootage << ("ft^2");
	
	return 0;
}