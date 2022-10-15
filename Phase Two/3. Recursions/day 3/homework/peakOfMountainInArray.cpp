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

int peakOfMountain(int *arr, int s, int e, int n){
    int mid = s + (e - s ) / 2;
    //=========================//
    //these are base conditions//
    if(e == s){return s;}
    if(s > e){return -1;}
    //========================//

    //checking if it is a peak element////////
    if((mid == 0 || arr[mid] >= arr[mid + 1]) &&
       (mid == n - 1 || arr[mid] >= arr[mid - 1])){
        return mid;
    }
    if(mid > 0 && arr[mid] < arr[mid - 1]){
        return peakOfMountain(arr, s, mid, n);
    }
    else{
        return peakOfMountain(arr, mid+1, e, n);
    }

}
int peak(int *arr, int n){
    return peakOfMountain(arr, 0, n-1, n);
}

int main()
{
    int arr[8] = {6, 8, 9, 1, 2, 3, 4, 6}; 
    cout<<arr[peak(arr, 8)]<<endl;





    return 0;
}