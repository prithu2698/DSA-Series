#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

void printValueFromPointer(int *p){
    cout<< *p <<endl;
}

void updateAddress(int *p){
    p = p + 1;
    cout<< "Inside -->  "<< p <<endl;
}

void updateValue(int *p){
    *p = *p + 1;
    // cout<< *p <<endl;
}

int main()
{
    int num = 5;
    int *ptr = &num;
    printValueFromPointer(ptr);
    cout<<"Outside -->  "<< ptr <<endl; 
    updateAddress(ptr);
    cout<<"before "<< *ptr <<endl;
    updateValue(ptr);
    cout<<"after "<< *ptr <<endl;






    return 0;
}