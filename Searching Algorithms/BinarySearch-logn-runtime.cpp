#include <iostream>
using namespace std;



// RECURSIVE BINARY SEARCH

int binarySearch(int arr[], int item, int left, int right) {

	int mid = ((right - left) / 2) + left;
	
	if (right >= left) {
		if (arr[mid] == item) {
			return mid;
		}
		else if (arr[mid] < item) {
			return binarySearch(arr, item, mid + 1, right);
		}
		else if (item < arr[mid]) {
			return binarySearch(arr, item, left, mid - 1);
		}
	}
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, x, 0, n - 1);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}

// ITERATIVE BINARY SEARCH

/*
int binarySrch(int arr[], int item, int size) {

	int low = 0, high = size - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == item) {
			return arr[mid];
		}
		else if (arr[mid] > item) {
			high = mid - 1;
		}
		else if (arr[mid] < item) {
			low = mid + 1;
		}
	}
	return -1;
}

int main(void)
{
	int nums[] = { 2, 5, 6, 8, 9, 10 };
	int target = 5;

	int n = sizeof(nums) / sizeof(nums[0]);
	int index = binarySrch(nums, n, target);

	if (index != -1) {
		printf("Element found at index %d", index);
	}
	else {
		printf("Element not found in the array");
	}

	return 0;
}
*/




