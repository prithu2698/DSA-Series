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

void reverseString(string& str, int i, int j){
    if(i > j){
        return;
    }
    swap(str[i], str[j]);
    i++;j--;
    reverseString(str, i, j);
}

int main()
{
    string str;
    getline(cin, str);
    reverseString(str, 0, str.length() - 1);
    cout<<str<<endl;





    return 0;
}