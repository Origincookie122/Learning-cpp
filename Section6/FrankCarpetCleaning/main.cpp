/*=================================================================================================
 * Frank carpet cleaning service charges $30 per room 
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * Prompt the user to provide the number of rooms they would like cleaned and provide an estimate
 * 
 * ESTIMATE SHOULD LOOK LIKE THIS
 * 
 * Estimate for carpet cleaning service:
 * Number of rooms: 2
 * Price per room: $30
 * Cost: $60
 * Tax: $3.60
 * ==============================================================================================
 * Total Cost: $63.60
 * This estimate is valid for 30 days
 * **/
 
#include <iostream>

int main() {
	const int pricePerRoom {30};
	const double salesTax {0.06};
	const int estimationValidDays {30};
	
	int roomsNeededCleaned {0};
	
	std::cout << ("WELCOME TO FRANK's CARPET CLEANING SERVICES!") << std::endl;
	std::cout << ("How many rooms would you liked cleaned?: ");
	
	std::cin >> roomsNeededCleaned;
	
	if(roomsNeededCleaned <= 0) {
		std::cout << ("No rooms are needed to be cleaned") << std::endl;
		return 0;
	}
	
	int roomCost {roomsNeededCleaned * pricePerRoom};
	double salesTaxCost {roomCost * salesTax};
	double totalCost {roomCost + salesTaxCost};
	
	std::cout << ("Estimate for carpet cleaning service:") << std::endl;
	std::cout << ("Number of rooms: ") << roomsNeededCleaned << std::endl;
	std::cout << ("Price per room: $") << pricePerRoom << std::endl;
	std::cout << ("Cost: $") << roomCost << std::endl;
	std::cout << ("Tax: $") << salesTaxCost << std::endl;
	std::cout << ("==============================================================================================") << std::endl;
	std::cout << ("Total Cost: $") << totalCost << std::endl;
	std::cout << ("This estimate is valid for ") << estimationValidDays << (" days") << std::endl;
	
	return 0;
}