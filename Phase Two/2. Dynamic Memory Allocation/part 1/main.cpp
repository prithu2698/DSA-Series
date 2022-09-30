#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}

int arrSum(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

void printCh(char *arr, int size){
    char ch[] = "";
    for(int i = 0; i < size; i++){
        ch[i] = arr[i];
    }
    cout<<ch<<endl;
}

int main()
{
/*
    int i = 5;
    int& j = i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    // update1(i);
    // cout<<i<<endl;
    // update2(i);
    // cout<<i<<endl;

*/
/*
    char* ch = new char;
    int* i = new int;

    //creating an array inside heap memory
    int* arr = new int[10];
    cout<<sizeof(*arr)<<endl;
*/
/*
    int n;
    cin>>n;
    int* arr = new int[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    // int ans = arrSum(arr, n);
    // cout<< ans <<endl;

    delete []arr;
    int ans2 = arrSum(arr, n);
    cout<<ans2<<endl;
*/
/*  
    char* ch = new char[40];
    ch = "abcdefg";
    delete []ch;
    printCh(ch, 8);
*/
/*
//VOID POINTER
    int a = 5;
    void* p = &a;
    cout<<p<<endl;
    // cout<<*p<<endl; this returns error cz void pointer cannot be dereferenced

//TYPECASTING WITH VOID POINTER
    int b = 4;
    char c = 'a';
    void* ptr = &b;
    cout<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    ptr = &c;
    cout<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;
*/









    return 0;
}