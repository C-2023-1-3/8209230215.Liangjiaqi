#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }

    while (i < size1) {
        list3[k++] = list1[i++];
    }

    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;

    int* list1 = new int[size1];

    cout << "Enter the elements of the first array in sorted order: ";
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    int* list2 = new int[size2];

    cout << "Enter the elements of the second array in sorted order: ";
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    int mergedSize = size1 + size2;
    int* mergedList = new int[mergedSize];

    merge(list1, size1, list2, size2, mergedList);

    cout << "The merged array is: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedList[i] << " ";
    }

    delete[] list1;
    delete[] list2;
    delete[] mergedList;

    return 0;
}