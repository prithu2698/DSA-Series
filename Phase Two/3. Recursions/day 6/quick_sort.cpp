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

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i < e; i++){
        if(arr[i] < pivot){
            count++;
        }
    }
    int pivotIndex = s + count;
    swap( arr[pivotIndex], arr[s]);
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++; 
        }
        while(pivot < arr[j]){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j++]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int s, int e){
    if(s >= e){
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}
int main()
{

    int n = 5;
    int arr[n] = {3, 6, 1, 4, 9};
    quickSort(arr, 0, n-1);
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}