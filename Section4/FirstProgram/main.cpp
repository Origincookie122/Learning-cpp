#include <iostream>

using namespace std;

int main() {
	/**
	* Integer Declaration would be std::int if we were not using namespace std
	* */
	int favNum;
	
	/**
	* Using library STD to output text to the terminal.
	* COUT is the function we use to output text the the terminal
	* << is the operator for out
	* then pass a hard coded string
	* :: is how we are calling the function;
	* */
	std::cout << ("What is your favorite number?: ");
	
	/**
	* We use CIN function to grab the input line from the terminal
	* >> is the operator we use to take information from the terminal. THIS IS CONSIDERED AN INPUT OPERATOR
	* We then store the information in favNumber
	* */
	std::cin >> favNum;
	
	std::cout << "My favorite number is also: " << favNum << "." << std::endl;
	/**
	* We return 0 to show the program exited correctly.
	* */
	return 0;
}