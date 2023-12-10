#include <iostream>
using namespace std;

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; 
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; 

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    cout << "Array before sorting: ";
    printArray(arr, size);

    sortArray(arr, size);

    cout << "Array after sorting: ";
    printArray(arr, size);

    delete[] arr; 

    return 0;
}