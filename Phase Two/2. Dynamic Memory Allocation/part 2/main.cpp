#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

// void jagged2DArray(int **array, int row, int col){
//     cout<<"enter row: ";
//     cin>>row;
//     cout<<"enter col: ";
//     cin>>col;
//     createJagged2Darray(array, row, col);
//     takeInput(array, row, col);
//     showOutput(array, row, col);
// }
void createJagged2Darray(int **arr, int& row, int& col){
    for(int i = 0; i < row; i++){
        cout<<"enter jagged col"<<i+1<<endl;
        cin>>col;
        int *arr = new int[col];
    }
}
void create2DArray(int **arr, int& row, int& col){
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }
}
void takeInput(int **arr, int row, int& col){
    for(int i = 0; i < row; i++){
        cout<<"please enter for row "<<arr[i]<<endl;
        for(int j = 0; j < col; j++){
            cin>> arr[i][j];
        }
    }
}
void showOutput(int **arr, int row, int& col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

/// @brief 
/// @return 
int main()
{
/*
    // this is 2D array array with dynamic memory
    int row, col;
    cout<<"enter row:  ";
    cin>>row;
    cout<<"enter col:  ";
    cin>>col;
    int **arr = new int* [row];
    cout<<"creating 2D array....."<<endl;;
    create2DArray(arr, row, col);
    takeInput(arr, row, col);
    cout<<"your output...."<<endl;
    showOutput(arr, row, col);
    */
// this is 2D jagged array with dynamic memory
    int row;
    cin>>row;
    int col;
    int **arr = new int* [row];

    // createJagged2Darray(arr, row, col);
    // takeInput(arr, row, col);
    // showOutput(arr, row, col);
    //creating 2D array
    for(int i = 0; i < row; i++){
        cout<<"enter col for row "<<i<<endl;
        cin>>col;
        int *arr = new int[col];
        //taking input for every col
        for(int j = 0; j < col; j++){
            cin>> arr[j];
        }
    }
    //taking input
    // for(int i = 0; i < row; i++){
    //     cout<<"please enter for row "<<arr[i]<<endl;
    //     for(int j = 0; j < col; j++){
    //         cin>> arr[i][j];
    //     }
    // }
    
    //showing output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}