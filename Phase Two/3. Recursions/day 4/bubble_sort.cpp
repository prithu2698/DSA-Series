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

void bubbleSort(int *arr, int n){
    if(n == 0 || n == 1){
        return ;
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            
        }
    }
    
    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[9] = {1, 2, 6, 7, 8, 9, 3, 4, 5,};
    bubbleSort(arr, 9);
    for(int i = 0; i < 9; i++){
        cout<<arr[i]<<" ";
    }






    return 0;
}