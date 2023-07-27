#include <iostream>
using namespace std;

// First solution for BubbleSort
// Here, the counter was incremented in the if statement
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Second solution for BubbleSort
// Here, the counter was incremented 
// in the for loop instead of the if statement
void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int x = i + 1; x < n; x++) {

            if (arr[i] > arr[x]) {
                swap(arr[i], arr[x]);
            }
        }
    }
}


// Function to print an array  
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int main()
{
    int arr[] = { 5, 1, 4, 2, 3 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}