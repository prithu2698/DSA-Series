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

void selectionSort(int *arr, int i, int n){
    // ======================================== //
    //this is base case///////////
    if(n == 0 || n == 1 || (n == 2 && arr[0] < arr[1]) || i == n - 1){
        return ;
    }
    // ========================================= //

    int min = i;
    for(int j = i + 1; j < n; j++){
        if(arr[min] > arr[j]){
            min = j;
        }
    }
    swap(arr[i], arr[min]);

    
    selectionSort(arr, i+1, n);

}

int main()
{
    int arr[9] = {1, 2, 6, 7, 8, 9, 3, 4, 5,};
    selectionSort(arr , 0, 9);
    for(int i = 0; i < 9; i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}