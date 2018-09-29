#include <iostream>

void check(double n) {
	n /= 2;
	if (n <= 2) {
		if (n == 2) {
			std::cout << "YES" << std::endl;
			return;
		}
		else {
			std::cout << "NO" << std::endl;
			return;
		}
	}

	return check(n);

}



void main() {

	system("color F4");

	double n = 256;
	check(n);

	system("pause");
}