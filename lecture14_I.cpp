#include <iostream>
using namespace std;

void swap(int *x, int* y){
    int c;
    c = *x;
    *x = *y;
    *y = c;

    cout << "swapping is complete" << endl;

}

int main(){

    // int a,b;

    // a=3;
    // b=4;

    // swap(&a,&b);

    // cout << "the values of a and b after the swap are: "<< a << " " <<b;
    // cout << endl;
    
    int a[10];

    cout << "values for comparision : " << endl;

    cout << "the value of a    is" << a << endl;
    cout << "the values of address a[0] is" << &a[0] << endl;
    cout << "the values of address a[1] is"<< &a[1] << endl;

    return 0;
}