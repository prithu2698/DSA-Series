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
// vector<vector<int>> printDoubleVector(vector<vector<int>> vec){
//     for(int i = 0; i < vec.size(); i++){
//         for(int j = i; j < vec.size(); j++){
//             // cout<<" [ "<< vec[i][j]<<" ] ";
//             return vec[j];
//         }
//     }
// }
void powerSet(vector<int> nums, int index,  vector<int> output, vector<vector<int>>& ans){
    //base case /////////
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    //exclude/////
    powerSet(nums, index + 1, output, ans);
    //include/////
    int element = nums[index];
    output.push_back(element);
    powerSet(nums, index + 1, output, ans);


}
vector<vector<int>> subsets(vector<int>& nums ){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    powerSet(nums, index, output, ans);
    return ans;
    // printDoubleVector(ans);


}
int main()
{






    return 0;
}