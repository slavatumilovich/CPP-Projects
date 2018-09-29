#include <iostream>

void count(long int n, int x) {
	if (n > 0) {
		n /= 10;
		++x;
		return count(n, x);
	}
	std::cout << x << std::endl;
}



void main() {

	system("color F4");

	long int n = 5463777;
	int x = 0;
{
		count(n, x);
	}

	system("pause");
}