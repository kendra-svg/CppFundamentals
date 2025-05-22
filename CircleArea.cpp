#include <iostream>
#include <string>
#include <limits>

class Circle {
public:
	void CalculateArea() {
		double area;
		const double pi = 3.14;
		double radius;

		std::cout << "Enter radius: ";
		std::cin >> radius;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		area = pi * radius * radius;

		std::cout << "Given the radius, the area of this circle is: " << area << std::endl;


	}
};

class CircleWithParams {
public:
	void CalculateArea(double radius) {
		double area;
		const double pi = 3.14;

		area = pi * radius * radius;


		std::cout << "Given the parameter, the area of this circle is: " << area << std::endl;
	}
};

int main() {
	Circle circle;
	circle.CalculateArea();

	CircleWithParams circleWithParams;
	circleWithParams.CalculateArea(2);

}