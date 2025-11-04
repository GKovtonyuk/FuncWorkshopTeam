#include <iostream>
#include <windows.h>
using namespace std;

void findMinMax(int arr[], int size) {
    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    cout << "Мінімум: " << minVal << ", Максимум: " << maxVal;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    cout << "Введіть " << SIZE << " чисел: ";
    for (int i = 0; i < SIZE; i++) cin >> arr[i];

    findMinMax(arr, SIZE);

    return 0;
}