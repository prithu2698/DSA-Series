#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    // int num = 5;
    // cout<<num<<endl;

    // // Adderess of operator --> & 
    // cout<<"Address of num is "<< &num <<endl; // hexadecimal form

    // int *ptr = &num;

    // // Dereference operator --> *
    // cout<<"Value of num is "<<*ptr<<endl;

    // //Printing address using pointer
    // cout<<"Printing address using pointer -->  "<< ptr <<endl;

    // //Printing the size of pointer, address and value
    // cout<<"the size of value is "<< sizeof(num)<<endl;
    // cout<<"the size of value from the pointer is "<< sizeof(*ptr)<<endl;
    // cout<<"the size of address is "<< sizeof(ptr) <<endl;


    int i = 7;
    //Initializing a pointer to zero (creating a null pointer)
    int *p = 0;

    cout<< *p <<endl;

    //pointing the null pointer to a original value
    p = &i;

    cout<<*p<<endl;
    cout<<p<<endl;



    return 0;
}
