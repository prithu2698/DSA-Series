#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int getMax(int& a, int& b){
    return (a > b) ? a : b;
}
int main()
{

    int a = 1, b = 10;
    int ans = getMax(a, b);
    cout<<ans<<endl;



    return 0;
}