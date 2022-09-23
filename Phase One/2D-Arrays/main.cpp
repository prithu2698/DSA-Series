#include <iostream>
#include <cmath>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
	
	for(row = 0; row<3; row++){
		for(col = 0; col<3; col++){
			if(arr[row][col] == target){
				return 1;
			}
		}
	}
	return 0;
}

void rowSum(int arr[][3], int row, int col){
	for( row = 0; row<3; row++){
		int sum = 0;
		for( col = 0; col<3; col++){
			sum += arr[row][col];
		}
		cout<< sum <<" ";
	}
	
}

int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for( row = 1; row<=3; row++){
		int sum = 0;
		for( col = 1; col<=3; col++){
			sum += arr[row][col];
		}
		if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
	}
    cout<<"the maximum number is "<< maxi << endl;
    return rowIndex;
}
int main() {
	
	int arr[3][3];
	cout<<"please input your array: "<<endl;
	
	//for taking input for a 2D array
	for(int row = 0; row<3; row++){
		for(int col = 0; col<3; col++){
			cin >> arr[row][col];
		}
	}
	//for printing the output of the 2D array
	//row based output
	cout<<"row based output"<<endl;
	for(int row = 0; row<3; row++){
		for(int col = 0; col<3; col++){
			cout << arr[row][col]<<" ";
		}
		cout<<endl;
	}
	
	/*
	//for printing the output of the 2D array
	//row based output
	cout<<"col based output"<<endl;
	for(int row = 0; row<4; row++){
		for(int col = 0; col<3; col++){
			cout<< arr[col][row]<<" ";
		}
		cout<<endl;
	}

*/
	int target;
	cout<<"enter taget"<<endl;
	cin>>target;
	
	if( isPresent(arr, target, 3, 3 )){
		cout<<"element is present"<<endl;
	}
	else{
		cout<<"element is absent"<<endl;
	}

	rowSum(arr, 3, 3);
    int largest_row_sum = largestRowSum(arr, 3, 3);
	cout<<"the largest row is "<< largest_row_sum<<endl;
	// 1 2 3 4 5 6 7 8 9 10 11 12
  
}