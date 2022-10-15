#include<iostream>
#include<cmath>
#include<string>

using namespace std;

bool isPalindrome(string str, int i, int j){
    if(i > j){
        return true;
    }
    if(str[i] != str[j]){
       return false;
    }
    else{
       return isPalindrome(str, ++i, --j);
    }
}

int main()
{
    string name;
    getline(cin, name);
    // cout<<name<<endl;
    bool palin = isPalindrome(name, 0, name.length() - 1);
    if(palin){cout<<"true"<<endl;}
    else{cout<<"false"<<endl;}
    





    return 0;
}