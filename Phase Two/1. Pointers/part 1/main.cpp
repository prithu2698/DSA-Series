#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    
    /*
    int num = 5;
    cout<<num<<endl;

    // Adderess of operator --> & 
    cout<<"Address of num is "<< &num <<endl; // hexadecimal form

    int *ptr = &num;

    // Dereference operator --> *
    cout<<"Value of num is "<<*ptr<<endl;

    //Printing address using pointer
    cout<<"Printing address using pointer -->  "<< ptr <<endl;

    //Printing the size of pointer, address and value
    cout<<"the size of value is "<< sizeof(num)<<endl;
    cout<<"the size of value from the pointer is "<< sizeof(*ptr)<<endl;
    cout<<"the size of address is "<< sizeof(ptr) <<endl;


    int i = 7;
    //Initializing a pointer to zero (creating a null pointer)
    int *p = 0; // I have to point the address after this line or else my code will not be executed after this point//////
    p = &i;

    cout<< *p <<endl;

    //pointing the null pointer to a original value

    cout<<*p<<endl;
    cout<<p<<endl;
*/

    /*
    int num = 5;
    int *p = 0;
    p = &num;
    int *a = p;// copying a pointer///
    a++;
    cout<<"num: "<<num<<endl;
    cout<<"a: "<<a<<endl; 
    cout<<"num: "<<num<<endl;
    cout<<"a: "<<*a<<endl; 

*/

    /*

    int firstValue = 5, secondValue = 15;
    char thirdValue = 'a';
    int *p1 , *p2;
    char *p3;
    p1 = &firstValue;
    p2 = &secondValue;
    p3 = &thirdValue;

    *p1 = 10; //value pointed to by p1 = 10
    *p2 = *p1; // value pointed to by p2 = value pointed to by p1
    p1 = p2; // p1 = p2 (value of pointer is copied)
    *p1 = 20; // value pointed to by p1 = 20 
    *p3 = 'b'; // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstValue << endl; cout << "secondvalue is " << secondValue << endl; cout << "thirdvalue is " << thirdValue << endl; 
*/

    
    return 0;
}
