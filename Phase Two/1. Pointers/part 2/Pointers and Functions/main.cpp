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

int getSum(int *arr, int n){
    cout<<"size of arr: "<< sizeof(arr) <<endl;'\n';
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += i[arr];
    }
    return sum;
}

int main()
{
  
  /*
    int num = 5;
    int *ptr = &num;
    printValueFromPointer(ptr);
    cout<<"Outside -->  "<< ptr <<endl; 
    updateAddress(ptr);
    cout<<"before "<< *ptr <<endl;
    updateValue(ptr);
    cout<<"after "<< *ptr <<endl;

    int arr[6] = {1, 2, 3, 4, 5, 7};
    int Sum = getSum(arr, 6);
    cout<<Sum<<endl;
    Sum = getSum(arr + 3, 3);
    cout<<Sum<<endl;
    Sum = getSum(arr + 3, 6);//this adds garbage value////
    cout<<Sum<<endl;
    Sum = getSum(arr + 3, 6-3);//this is same as line 44
    cout<<Sum<<endl;

*/

/*
    float f = 10.5;
    float p = 2.5;
    float * ptr = & f ;
    ( * ptr ) ++ ;
    * ptr = p ;
    cout << * ptr <<" "<<  f << " "  <<p ;
  */

/*
    int *ptr = 0;
    int a = 10;
    *ptr = a;
    cout<<*ptr<<endl;
  */

   
   /* 
    char ch = 'a';
    char *p = &ch;
    ch++;
    cout<<*p<<endl;
    */

    int arr [ ] = { 4 , 5 , 6 , 7 } ;
    int * p = ( arr + 1 ) ;
    cout << * arr + 9 ;
  
    return 0;
}