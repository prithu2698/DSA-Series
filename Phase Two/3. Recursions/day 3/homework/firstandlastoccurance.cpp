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

/*
int firstOccur(int *arr, int s, int e, int key){
    int mid = s + (e - s) / 2;
    int ans = -1;
    if(s >= e){
        return ans;
    }
    if(arr[mid] == key){
        ans = mid;
        return firstOccur(arr, s, mid-1, key);
    }
    if(arr[mid] < key){
        return firstOccur(arr, s, mid + 1, key);
    }
    else{
        return firstOccur(arr, mid - 1, e, key);
        // return ans;
    }
    // return firstOccur(arr, mid + 1, e, key);
    return ans;
}
// int firstOccurance(int *arr, int n, int key){
//     return firstOccur(arr, 0, n-1, key);
// }
*/

/*
int firstOccurance(int *arr, int n, int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        int mid = s + (e - s) / 2;

    }
    return ans;
}
*/


int firstOccurance(int *arr, int n, int s, int e, int key){
    int mid = s + (e - s) / 2;
    int ans = -1;
    
    if(s > e){
        return ans;
    }

    if(key > arr[mid]){
        firstOccurance(arr, n, mid + 1, e, key);
    }
    else if(key < arr[mid]){
        firstOccurance(arr, n, s, mid - 1, key);
    }
    // if(key == arr[mid]){
    else{
        ans = mid;
        firstOccurance(arr, n, s, mid - 1, key);
    }
} 

int main()
{
    cout<<"running"<<endl;
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<firstOccurance(arr, 9, 0, 9-1, 3)<<endl;
    // cout<<firstOccur(arr, 0, 7, 3);  
    cout<<"ending"<<endl;





    return 0;
}