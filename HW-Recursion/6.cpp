#include <iostream>

void myMin(int x) {
	int y;
	std::cin >> y;
	if (y > x) {
		x = y;
	}
	if (y == 0) {
		std::cout << "Максимальное число: " << x << std::endl;
		return;
	}
	myMin(x);
}



void main() {

	setlocale(LC_ALL, "Russian");
	system("color F4");

	std::cout << "Введите числа:" << std::endl;

	int x = 0;
	myMin(x);

	system("pause");
}