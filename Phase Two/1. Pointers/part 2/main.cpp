#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ///////Integer Arrays//////////
    
    /*
    int arr[10] = {2, 5, 7, 10, 15};

    //the location of an element or a block of an array is the location of the first element or block of the array. In other words location of array is at the location of the first element of the array or array[0]
    cout<<"location of the first block of arr is "<< arr <<endl;
    // this is the normal method for printing address
    cout<<"location of the first block of arr is "<< &arr[0] <<endl;

    cout<<"printing the first element using dereferencing "<< *arr<<endl;
    cout<<"printing an element using dereferencing "<< *(&arr[2])<<endl;
    
    cout<<"Incrementing -->  " << *arr + 1<<endl;
    cout<<"getting next value -->  "<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+2)+1<<endl;
    // FORMULA --> arr[i] = *(arr+i)
    // FORMULA --> i[arr] = *(i+arr)

    cout<<arr[2]<<endl; //arr[i]
    cout<<2[arr]<<endl; //i[arr]
*/

    /*
    ////////////////////////////Differences////////////////////////////////////////// 
    int temp[10] = {6, 5};
    int *ptr = &temp[0];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(ptr)<<"  "<<ptr<<endl;
    cout<<sizeof(*ptr)<<"  "<<*ptr<<endl;// dereferanced value
    cout<<sizeof(&ptr)<<"  "<<&ptr<<endl; //memory needed to store the adderess of ptr
    cout<<sizeof(&(*ptr))<<"  "<<&(*ptr)<<endl; //referes to the address of the main value
*/
 
    /*
    int a[10];
    int *p = &a[0];
    cout<<"before "<<p<<endl;
    p = p+1;
    cout<<"after "<<p<<endl;
    */

   ////////Char Arrays//////////////

    char ch[6] = "abcde";
    /* ///////////BAD PRACTICE /////////////
    char *c = &ch[0];
    // This prints entire char array because "char array" 's implementation is different than "int array"
    cout<< c <<endl;*/
    
    char temp = 'z';
    /* ///////////BAD PRACTICE /////////////
    char *p = &temp;
    cout<< p <<endl*/;



    return 0;
}