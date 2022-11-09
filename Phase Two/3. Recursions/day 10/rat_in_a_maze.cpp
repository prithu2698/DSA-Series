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

bool isSafe(int x, int y, vector<vector<int>>& m, vector<vector<int>>& visited, int n){
    if((x >= 0 && x < n ) && (y >= 0 && y < n ) && m[x][y] == 1 && visited[x][y] == 0){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>>& m, int n, vector<string> ans, string path, int x, int y, vector<vector<int>>& visited){
    //base case/////
    if( x == n - 1 && y == n - 1 ){
        ans.push_back(path);
        return ;
    }

    visited[x][y] = 1;

    //DOWN//
    int newx = x + 1;
    int newy = y;
    if(isSafe(newx, newy, m, visited, n)){
        path.push_back('D');
        solve(m, n, ans, path, newx, newy, visited);
        path.pop_back();//BACKTRACK//
    }
    
    //UP//
    newx = x - 1;
    newy = y;
    if(isSafe(newx, newy, m, visited, n)){
        path.push_back('U');
        solve(m, n, ans, path, newx, newy, visited);
        path.pop_back();//BACKTRACK//
    }
    
    //LEFT//
    newx = x;
    newy = y - 1;
    if(isSafe(newx, newy, m, visited, n)){
        path.push_back('L');
        solve(m, n, ans, path, newx, newy, visited);
        path.pop_back();//BACKTRACK//
    }
    
    //RIGHT//
    newx = x;
    newy = y + 1;
    if(isSafe(newx, newy, m, visited, n)){
        path.push_back('R');
        solve(m, n, ans, path, newx, newy, visited);
        path.pop_back();//BACKTRACK//
    }

    visited[x][y] = 0;//BACKTRACK//
}

vector<string> ratInAMaze(vector<vector<int>>& m, int n){
    vector<string> ans;
    string path = "";
    int srcx = 0, srcy = 0;
    vector<vector<int>> visited = m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            visited[i][j] = 0;
        }
    }
    solve(m, n, ans, path, srcx, srcy, visited);
    sort(ans.begin(), ans.end());
    return ans;

}

int main()
{






    return 0;
}