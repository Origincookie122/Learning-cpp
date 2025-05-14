// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

int main() {
	const double pricePerSmallRoom {25.00};
	const double pricePerLargeRoom {35.00};
	const double salesTaxPercentage {0.06};
	const int estimateExpiration {30}; // Estimate Expiration in days
	
	int smallRooms {0};
	int largeRooms {0};
	
	std::cout << ("How many small rooms need cleaning?: ");
	std::cin >> smallRooms;
	
	std::cout << ("How many large rooms need cleaning?: ");
	std::cin >> largeRooms;
	
	// Calculating
	
	double smallRoomPrice {smallRooms * pricePerSmallRoom};
	double largeRoomPrice {largeRooms * pricePerLargeRoom};
	
	double roomCost {smallRoomPrice + largeRoomPrice};
	
	double taxCost {roomCost * salesTaxPercentage};
	
	double totalCost {roomCost + taxCost};
	
	//OUTPUT
	
	std::cout << ("Estimate for carpet cleaning service") << std::endl;
	std::cout << ("Number of small rooms: ") << smallRooms << std::endl;
	std::cout << ("Number of large rooms: ") << largeRooms << std::endl;
	std::cout << ("Price per small room: $") << pricePerSmallRoom << std::endl;
	std::cout << ("Price per large room: $") << pricePerLargeRoom << std::endl;
	std::cout << ("Cost: $") << roomCost << std::endl;
	std::cout << ("Tax: $") << taxCost << std::endl;
	std::cout << ("===============================") << std::endl;
	std::cout << ("Total estimate: $") << totalCost << std::endl;
	std::cout << ("This estimate is valid for ") << estimateExpiration << (" days") << std::endl;
	
	return 0;
}