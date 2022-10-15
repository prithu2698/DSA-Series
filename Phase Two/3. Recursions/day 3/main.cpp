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

bool isSorted(int arr[], int size){

    if(size == 0 || size == 1){return true;}
    if(arr[0] > arr[1]){return false;}
    
    return isSorted(arr+1, size-1);
        
}
int arrSum(int arr[], int size){
    // int sum;
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int remainingPart = arrSum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}
bool linearSearch(int arr[], int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }

    return linearSearch(arr+1, size-1, key);
}
bool binarySearch(int arr[], int start, int end, int key){
    if(start > end){//base case
        return false;
    }
    int mid = start + (end-start)/2;

    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] > key){
        return binarySearch(arr, start, mid-1, key);
    }
    else{
        return binarySearch(arr, mid+1, end, key);
    }
}



int main()
{

    int arr[10] = {1, 6, 3, 9, 2, 7, 8, 4, 5, 10};
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout<<isSorted(arr, 10)<<endl;
    // cout<<isSorted(arr2, 10)<<endl;
    int arr3[4] = {1, 2, 3, 4};
    // cout<<arrSum(arr3, 4);
    // cout<<linearSearch(arr3, 4, 5)<<endl;
    cout<<binarySearch(arr2, 0, 9, 11)<<endl;


    return 0;
}