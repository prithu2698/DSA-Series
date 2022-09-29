#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

void update(int **p){
    // p = p + 1;
    
    // *p = *p + 1;

    **p = **p + 1;
    
}


int main()
{

/*
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

*/

    int p = 5;
    int* p1 = &p;
    int** p2 = &p1;
    cout<< p<<endl;
    cout<< p1<<endl;
    cout<< p2<<endl;
    update(p2);
    cout<< p<<endl;
    cout<< p1<<endl;
    cout<< p2<<endl;



    return 0;
}