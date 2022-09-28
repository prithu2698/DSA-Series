#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{


    //Double pointers
    int num = 5;
    int *i = &num;
    int **j = &i;
    int ***k= &j;

    cout << num <<endl;
    cout << *i <<endl;
    cout << **j <<endl;
    cout << ***k <<endl;
    cout << i <<endl;
    cout << j <<endl;
    cout << k <<endl;
    cout << &k <<endl;





    return 0;
}