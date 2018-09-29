#include <iostream>


int binarySearch(int arr[], const int SIZE, const int VALUE) {
	int left = 0;
	int right = SIZE;

	int middle;
	while (left <= right) {
		middle = (right + left) / 2;
		if (arr[middle] == VALUE) {
			return middle;
		}
		else if (arr[middle] < VALUE) {
			left = middle + 1;

		}
		else {
			right = middle - 1;

		}
	}
	return -1;
}

void main() {

	system("color F4");

	const int SIZE = 10;
	int arr[SIZE] = { 0,1,2,3,4,5,6,7,8,9 };

	std::cout << std::endl;

	std::cout << binarySearch(arr, SIZE, 7) << std::endl;

	system("pause");
}