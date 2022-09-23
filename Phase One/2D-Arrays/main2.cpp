#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
void printVector(vector<vector<int>> matrix){
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Rotate(vector<vector<int>> matrix) {

        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
                printVector(matrix); cout<<endl;
            }
        }
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        printVector(matrix);
        
    }

int main(){
    vector<vector<int>> matrix;
    matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printVector(matrix);cout<<endl;
    Rotate(matrix);
    // printVector(matrix);

    return 0;
}