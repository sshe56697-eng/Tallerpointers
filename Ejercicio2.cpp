#include <iostream>
using namespace std;

int addition (int* arr,int n) {
    int sum = 0
    for (int i=0;i<n;i++){
        sum += *(arr + i);
    }
    return sum ;
}

    int main () {
        int n;
        cout<<"Enter size of array: ";
        cin>> n;

        int* storage = new int[n];
        for (int i=0;i<n;i++) {
                cin>> *(storage + i);
                
        }


        return 0;
    }