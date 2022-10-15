#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int factorial(int n){
    if(n == 0){return 1;}

    // int smallerProblem = factorial(n-1);
    // int biggerProblem = n*smallerProblem;
    // return biggerProblem;
    return n*factorial(n-1);
}
int power(int n){
    if(n == 0){return 1;}
    // int smallerProblem = power(n-1);
    // int biggerProblem = 2*smallerProblem;
    // return biggerProblem;
    return 2*power(n-1);
}
void printCount(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    printCount(n-1);
    cout<<n<<" ";

}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<power(n)<<endl;
    printCount(n);





    return 0;
}