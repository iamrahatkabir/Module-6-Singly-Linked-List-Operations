#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

void fun(int* &p) //Receiving the pointer P as reference; and works same a P from main function;
{
    // cout << p << endl; //P prints the address of X;
    // cout << &p << endl; //If we receive the P pointer variable with &P than it doesn't creates a new variable in fun() function and it prints the same address of the P in main function; 

    // int y = 200;
    // p = &y; // P stores the address of Y;

    p = NULL;

}

int main()
{
    int x = 100;
    int* p = &x;

    fun(p);

    // cout << p << endl; //P prints the address of X;
    // cout << &p << endl; // &P prints the address of pointer P variable;

    cout << "Main: " << p << endl;

    return 0;
}