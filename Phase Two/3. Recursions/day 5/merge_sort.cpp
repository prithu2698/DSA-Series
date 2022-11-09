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

void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;
    // int mainArrIndex = s;

    //taking the length of the divided array
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    //creating array to copy the divided array
    int *first = new int[len1];
    int *second = new int[len2];
    
    //copying two arrays////////
    int mainArrIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrIndex++];
    }
    mainArrIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrIndex++];
    }
    
    //merging the two arrays/////////
    int index1 = 0;
    int index2 = 0;
    mainArrIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrIndex++] = first[index1++];
        }
        else{
            arr[mainArrIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainArrIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainArrIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e){
    //======================//
    //base case////
    if(s >= e){
        return ;
    }
    //====================//

    int mid = s + (e - s) / 2;
    //======left part======//
    mergeSort(arr, s, mid);
    //======right part=====//
    mergeSort(arr, mid+1, e);
    //MERGE
    merge(arr, s, e);

}




int main()
{
    int n = 5;
    int arr[5] = {3, 6, 1, 4, 9};
    mergeSort(arr, 0, n-1);
     


    return 0;
}