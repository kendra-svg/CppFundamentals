#include <iostream>
#include <limits>

class EvenOrOdd {
public:
	void Classifier() {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (number % 2 == 0) {
			std::cout << number << " is even. \n";
		}
		else {
			std::cout << number << " is odd. \n";
		}


	}
};

class EvenOrOddWithParams {
public:
	void Classifier(int number) {
		if (number % 2 == 0) {
			std::cout << number << " is even. \n";
		}
		else {
			std::cout << number << " is odd. \n";
		}
	}
};

class EvenOrOddWithSwitch {
public:
	void Classifier() {
		int number;

		std::cout << "Enter a number: ";
		std::cin >> number;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (number % 2) {
		case 0:
			std::cout << number << " is even. \n";
		case 1:
			std::cout << number << " is odd. \n";

		}
	}
};

/*int main() {
	EvenOrOdd evenOrOdd;

	evenOrOdd.Classifier();

	EvenOrOddWithParams evenOrOddWithParams;

	evenOrOddWithParams.Classifier(3);

	EvenOrOddWithSwitch evenOrOddWithSwitch;

	evenOrOddWithSwitch.Classifier();

}*/