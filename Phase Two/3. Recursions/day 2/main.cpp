#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<array>
#include<stack>
#include<string>
#include<queue>
#include<map>
#include<set>
using namespace std;

void home(int src, int dest){
    cout<<"source: "<<src<<" destination: "<<dest<<endl;
    if(src == dest){
        cout<<"reached"<<endl;
        return ;
    }
    src++;
    home(src, dest);
}
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return (fibonacci(n-1)+fibonacci(n-2));
}
void sayDigits(int n, string arr[]){
    if(n == 0){
        return;
    }
    int digit = n % 10;
    n = n / 10;
    sayDigits(n, arr);
    cout<<arr[digit]<<" ";
}
void sayDigitsWithWhileAndFor(int n, string arr[]){
    stack<int> digits;
    while(n != 0){
        int digit = n % 10;
        n = n/10;
        digits.push(digit);
    }
    int element;
    for(int i = digits.size(); i >=0; i--){
        element = digits.top();
        cout<< arr[element]<<" ";
        digits.pop();
    }

    
}
int main() 
{

    int n;
    cout<<"enter n: ";
    cin>>n;
    int src = 1;
    int dest = 100;
    // home(src, dest);
    // cout<< fibonacci(3);
    string arrayForSayDigits[10] ={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
    // sayDigits(n, arrayForSayDigits);
    sayDigitsWithWhileAndFor(n, arrayForSayDigits);



    return 0;
}