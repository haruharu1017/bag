#include "bag.h"
#include <cstdlib>
#include <cassert>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    bag<int> b1;
    b1.insert(1);
    b1.insert(2);
    b1.insert(3);
    b1.insert(4);
    b1.insert(5);
    for (auto b : b1){
        cout << b << " ";
    }
    cout << endl;
    for (bag<int>::iterator it = b1.begin(); it!=b1.end(); ++it)
    {cout << *it << " ";}

    return 0;
}
