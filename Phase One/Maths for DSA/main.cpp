#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

// int countPrimes(int n){
//     vector<bool> prime(n+1, true);
//     int count = 0;

//     prime[0] = prime[1] = false;

//     for(int i = 2; i < n; i++){
//         if(prime[i]){
//             count++;
//             for(int j = 2*i; j < n; j = j + i){
//                 prime[j] = 0;
//             }
//         }
//     }
//     return count;
// }
// int gcd(int a, int b){
//     if(a == 0){
//         return b;
//     }
//     if(b == 0){
//         return a;
//     }

//     while(a != b){
//         if(a > b){
//             a = a-b;
//         }
//         else{
//             b = b- a;
//         }
//     }
// }
int modularExponentiation ( int x , int n , int m ) {
    int res = 1 ;
    while ( n > 0 )
    {
         if ( n & 1 )
         { // odd
              res = ( 1LL * ( res ) * ( x ) % m ) % m ;
        }
        x = ( 1LL * ( x ) * m * ( x ) % m ) % m ;
         n = n >> 1 ;
    }
    return res ;
}
int main(){
    // cout<<countPrimes(40)<<endl;
    // cout<<gcd(12, 24)<<endl; 
    cout<<modularExponentiation(10, 2, 1);
        
    
    
    return 0;
}