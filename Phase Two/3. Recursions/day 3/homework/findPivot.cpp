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

int findPivot(int arr[], int s, int e){
    
    int mid = (s + e) / 2;

    //=========================//
    // these two are base case //
    if(s == e){return s;}
    if( s > e ){return -1;}//this means it is not rotated
    //=========================//
    
    if (mid < e && arr[mid] > arr[mid + 1])
       return mid;
 
    if (mid > s && arr[mid] < arr[mid - 1])
       return mid-1;
     
    if (arr[s] >= arr[mid]){
      /* Pivot element is between s and mid index */
       return findPivot(arr, s, mid-1);
    } 
    
    else {
       /* Pivot element is between mid and e index arr*/
       return findPivot(arr, mid + 1, e);
   }
}



int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    cout<<arr[findPivot(arr, 0, 5-1)]<<endl;
    cout<<arr[findPivot(arr, 0, 5)+1]<<endl;


    return 0;
}