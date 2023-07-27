#include <iostream>
using namespace std;

/*This MergeSort algorithm was translated to C++ from a MergeSort function in
JavaScript. Later, a MergeSort function was searched online and used to
correct the mistakes of my translation. Later, this improved version was practiced.*/

int MergeSort(int arr[]) {

	int arr1Length = sizeof(arr) / sizeof(arr[0]);

	if (arr1Length == 1) {
		return arr[0];
	}
	else if (arr1Length == 2) {
		if (arr[0] > arr[1]) {
			return arr[0];
		}
		return arr[1];
	}

	int middleValue = arr1Length / 2;

	cout << "newArr1 has: ";
	for (int a = 0; a < middleValue; a++) {
		int* newArr1 = new int[middleValue];
		newArr1[a] = arr[a];
	}

	cout << "newArr2 has: ";
	for (int b = middleValue; b < arr1Length; b++) {
		int* newArr2 = new int[arr1Length - middleValue];
		newArr2[b] = arr[b];
	}

	int* merged = new int[arr1Length];
	int newArr1Index = 0;
	int newArr2Index = 0;

	while (newArr1Index < ) {
		if () {

		}
		else if () {

		}



	}



}

void main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };



}