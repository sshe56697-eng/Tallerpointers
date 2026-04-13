#include <iostream>
using namespace std;

int findMax(int* arr, int size) {
    if (size == 0) {
        return -1;
    }

    int* ptr = arr;
    int maxVal = *ptr;

    for (int i = 0; i < size; i++) {
        if (*ptr > maxVal) {
            maxVal = *ptr;
        }
        ptr++;
    }

    return maxVal;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        return 0;
    }

    int* arr = new int[n];

    for (int* p = arr; p < arr + n; p++) {
        cin >> *p;
    }

    int maxValue = findMax(arr, n);
    cout << maxValue << endl;

    delete[] arr;
    return 0;
}