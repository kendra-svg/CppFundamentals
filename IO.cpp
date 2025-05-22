#include <iostream>
#include <string>
#include <limits>

//int main() {
	//std::string name;
	//std::cout << "Please enter your name: ";
	//std::getline(std::cin, name);
	//std::cout << "Your name is: " << name << std::endl;
	//return 0;
//}

class NameProcessor {
public:
	void NameGetter() {
		std::string name;
		std::cout << "Please enter your name: ";
		std::getline(std::cin, name); //std::cin stands for standard character input

		int age;
		std::cout << "Please enter your age: ";
		std::cin >> age; //reads input from keyboard and stores it in 'age'

		//Clear the newline character left in the input buffer 
		//after the user enters the age and 'std::cin >> age' is executed

		//Important to clean it because if i'ts not done before reading from the input again, then
		//next time it does, it will pickup the '\n' left in the buffer and 
		//could break the next the next input
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


		std::cout << "Your name is: " << name << std::endl;
		std::cout << "Your age is: " << age << std::endl;
	}
};

/*int main() {

	NameProcessor nameProcessor;
	nameProcessor.NameGetter();
}*/