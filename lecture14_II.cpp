#include <iostream>
using namespace std;

void minandmax(int *a , int *min, int * max){
    
    int large = a[0];
    int small = a[0];
    for(int i=0;i<6;i++){
        if(a[0]>large){
            large  = a[i];
        }
        if(a[i]<small){
            small = a[i];
        }
    }
}

int main(){

    int a[5];

    int min,max;
    int i;
    for(i=0;i<6;i++){
        a[i] = i;
    }
    minandmax(a,&min,&max);

    return 0;
}