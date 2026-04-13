#include <iostream>
using namespace std;

void swap (int* x,int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int x,y;
    x = 2;
    y = 9;

cout<<"Before: "<<x<< " " <<y<<endl;
    swap (&x,&y);
cout<<"After: "<<x<< " " <<y<< endl;   
    return 0;
}