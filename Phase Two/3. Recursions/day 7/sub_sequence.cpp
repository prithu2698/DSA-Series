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

void solve(string str, int index, string output, vector<string>& ans){
    //base case///////
    if(index >= str.size()){
        ans.push_back(output);
        return;
    } 

    //exclude
    solve(str, index + 1, output, ans);
    //include
    int element = str[index];
    output.push_back(element);
    solve(str, index + 1, output, ans);

}
vector<string> subSec(string str){
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, index, output, ans);
    return ans;
}


int main()
{
    string str = "Prithu";
    subSec(str);





    return 0;
}