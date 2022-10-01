#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

//CHAIN MACRO//////
#define PI 3.1416
#define Area(r) (PI*r*r)
//NORMAL MACRO DEFINATION
#define Area2(l,b) (l*b)
//function macro/////
#define Min(a, b) ( (a < b) ? a:b )
int main()
{
    int area = Area(7);
    cout<<area<<endl;
    int l1 = 5, l2 = 9;
    int area2 = Area2(l1,l2);
    cout<<area2<<endl;

    int min = Min(3333, 67);
    cout<<"the minimum value is "<<min<<endl;



    return 0;
}