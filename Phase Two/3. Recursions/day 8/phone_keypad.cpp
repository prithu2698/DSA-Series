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

void solve(string digits, vector<string>& ans, string output, int index, string mapping[]){
    //base case///////
    if(index >= digits.size()){
        ans.push_back(output);
        return ;
    }

    int digit = digits[index] - '0';
    string value = mapping[digit];
    
    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]); 
        solve(digits, ans, output, index + 1, mapping);
        output.pop_back();
    }
}

vector<string> phoneKeypad(string &digits){
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {"" ,"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, ans, output, index, mapping);
    return ans;
}
int main()
{
    cout<<"executing...."<<endl;

    cout<<"executed"<<endl;





    return 0;
}