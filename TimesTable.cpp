#include <iostream>
#include <limits>

class TimesTable {
public:
	void Calculator() {
		int number;
		int multiplication;

		std::cout << "Enter a number: ";
		std::cin >> number;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int i = 1; i <= 10; i++) {
			multiplication = number * i;
			std::cout << number << " times " << i << " is " << multiplication << ". \n";
		}
	}
};

/*int main() {
	TimesTable timesTable;

	timesTable.Calculator();

}*/