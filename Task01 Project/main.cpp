#include "util.h"
#include "logic.h"
#define BUF 100

int main() {
	int arr[BUF];

	int size;
	cout << "Enter size of vector: ";
	cin >> size;

	random_init(arr, size, -100, 100);
	//user_init(arr, size);
	//cout << "Enter vector elements: ";
	cout << "Vector before: " << convert(arr, size) << endl;

	//int result = calc_product_between_extreme_elements(arr, size);
	//cout << "Product of elements between extreme values is " << result << endl;

	//bubble_sort_asc(arr, size);
	//cout << "Vector after: " << convert(arr, size) << endl;

	//task03
	int sum = sum_absolute_value_after_first_negative_value(arr, size);
	cout << "Sum absolute values after first negative value is " << sum << endl;

	return 0;
}