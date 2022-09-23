#include <iostream>
#include <cmath>
using namespace std;

int getLengthOfCharArrWithFor(char arr[]){
	int count = 0;
	for(int i = 0; arr[i] != '\0'; i++){
		count++;
	}
	return count;
	
}
int getLengthOfCharArrWithWhile(char arr[]){
	int count = 0, i = 0;
	while(arr[i] != '\0'){
		count++;
		i++;
	}
	return count;
}
void reverse(char array[], int size){
	int s = 0, e = size-1;
	while(s<e){
		swap(array[s++], array[e--]);
		// s++; e--;
	}
}
char toLowerCase(char ch){
	if(ch>='a' && ch<='z'){
		return ch;
	}
	else{
		int temp = ch - 'A' + 'a';
		return temp;
	}
	
}
bool checkPalindrom(char a[], int n){
	int s = 0, e = n-1;
	while(s<=e){
		if(toLowerCase(a[s++]) != toLowerCase(a[e--])){
			return 0;
		}
	}
	return 1;
}


int main() {
	char name[20];
	cout<<"enter your name: ";
	// cin>>name;
	// int sizeWithFor = getLengthOfCharArrWithFor(name);
	// int sizeWithWhile = getLengthOfCharArrWithWhile(name);
	// cout<<"the length of your name is "<<sizeWithFor<<endl; 	
	// cout<<"the length of your name is "<<sizeWithWhile<<endl;
	// cout<<"the reverse is ";
	// reverse(name, sizeWithWhile);
	// cout<<name;
	/*int length = getLengthOfCharArrWithWhile(name);
	int isPalindrom = checkPalindrom(name, length);
	if(isPalindrom == 0){cout<<"It is not a palindrom";}
	else{cout<<"It is a palindrom";}cout<<endl;*/
	 // string s = "my name is akash";
	// cin.getline(name, name.length(), string)
	string myname;
	getline(cin, myname);

		



	
	
	
}