#include <iostream>
using namespace std;

int duplicar(int x) {
    return x * 2;
}

int triplicar(int x) {
    return x * 3;
}

void aplicar(int* arr, int n, int (*func)(int)) {
    for (int i = 0; i < n; i++) {
        *(arr + i) = func(*(arr + i));
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    aplicar(arr, n, duplicar);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}