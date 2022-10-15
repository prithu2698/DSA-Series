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

void insertionSort(int *arr, int i, int n){
    // ======================================== //
    //this is base case///////////
    if(n == 0 || n == 1 || (n == 2 && arr[0] < arr[1]) || i == n - 1){
        return ;
    }
    // ========================================= //
    int j = i-1;
    int temp = arr[i];
    for(; j >=2; j--){

        if(arr[j] > temp){
            arr[j+1] = arr[j];
        }
        else{break;}
    }
    arr[j + 1] = temp;
    insertionSort(arr, i+1, n);
}

int main()
{
    int arr[9] = {1, 2, 6, 7, 8, 9, 3, 4, 5,};
    insertionSort(arr , 0, 9);
    for(int i = 0; i < 9; i++){
        cout<<arr[i]<<" ";
    }





    return 0;
}