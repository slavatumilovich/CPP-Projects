#include <iostream>

void fib(int x, int y, int n) {
	if (n > 1) {
		x += y;
		y = x - y;
		--n;
		return fib(x, y, n);
	}
	std::cout << x << std::endl;
}



void main() {

	system("color F4");

	int n = 10;
	int x = 0;
	int y = 1;
	if (n == 1) {
	std::cout << 1 << std::endl;
	}
	else {
		fib(x, y, n);
	}

	system("pause");
}