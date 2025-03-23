#include "util.h"
#include "logic.h"
#define BUF 100

int main() {
	int arr[BUF];

	int size;
	cout << "Enter size of vector: ";
	cin >> size;

//	random_init(arr, size, -100, 100);
	user_init(arr, size);
	cout << "Enter vector elements: ";
	cout << "Vector: " << convert(arr, size) << endl;

	int result = calc_product_between_extreme_elements(arr, size);
	cout << "Product of elements between extreme values is " << result << endl;

	return 0;
}