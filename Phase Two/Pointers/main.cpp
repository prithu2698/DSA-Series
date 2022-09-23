#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int num = 5;
    cout<<num<<endl;

    // Adderess of operator --> & 
    cout<<"Address of num is "<< &num <<endl; // hexadecimal form

    int *ptr = &num;

    // Dereference operator --> *
    cout<<"Value of num is "<<*ptr<<endl;

    //Printing address using pointer
    cout<<"Printing address using pointer -->  "<< ptr <<endl;



    return 0;
}
