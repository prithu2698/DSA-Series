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

void solve(string &str, vector<string>& ans, int index){
    //base case/////
    if(index >= str.length()){
        ans.push_back(str);
        return ;
    }

    for(int j = index; j < str.length(); j++){
        swap(str[index], str[j]);
        solve(str, ans, index + 1);
        swap(str[index], str[j]);
    }
}
vector<string> permute(string &str){
    vector<string> ans;
    int index = 0;
    solve(str, ans, index);
    return ans;
}
int main()
{






    return 0;
}