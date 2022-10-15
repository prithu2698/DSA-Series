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

int Power(int base, int power){
    //==============================//
    //base case////////
    if(power == 0){
        return 1;
    }
    if(power == 1){
        return base;
    }
    //============================//
    //======recursive call========//
    int ans = Power(base, power/2);
    
    if(power%2 == 0){
        return ans*ans;
    }
    else{
        return base*ans*ans;
    }
}

int main()
{


    int a, b;
    cin>>a >> b;
    cout<< Power(a,b) <<endl;




    return 0;
}