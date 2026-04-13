#include <iostream>
using namespace std;

void printAsInt(int* ptr) {
    cout << "Reinterpreted as int: " << *ptr << endl;
}

void printBytes(char* ptr, int size) {
    cout << "Byte representation: ";
    for (int i = 0; i < size; i++) {
        cout << (int)*(ptr + i) << " ";
    }
    cout << endl;
}

int main() {
    float value;
    cout << "Enter a float: ";
    cin >> value;

    float* fptr = &value;
    int* iptr = (int*)fptr;
    char* cptr = (char*)fptr;

    cout << "Float value: " << value << endl;

    cout << "Address of value: " << fptr << endl;
    cout << "Address as int*: " << iptr << endl;
    cout << "Address as char*: " << (void*)cptr << endl;

    printAsInt(iptr);
    printBytes(cptr, sizeof(float));

    return 0;
}