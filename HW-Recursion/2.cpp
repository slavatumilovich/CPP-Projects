#include <iostream>

int print(int x, int y) {
	std::cout << x << std::endl;
	if (x == y) {
		return x;
	}
	return print(x + 1, y);
}



void main() {

	system("color F4");

	int x = 1;
	int y = 5;
	print(x, y);

	system("pause");
}