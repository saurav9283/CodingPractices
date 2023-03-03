#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int a = 60; // it break in 32+28(28= 16+12(12= 8+4))
    unsigned int b = 13; // it break in 8+4+1.
    int c = 0;

    c = a & b;
    cout << "Line 1  Value of c is " << c << endl; // 12 (0000 1100)

    c = a|b;
    cout << "Line 2 Value of c is " << c << endl; // 61 (0011 1101)

    c = a^b;
    cout << "Line 3 Value of c is " << c << endl; // 49 (0011 0001)

    c = ~a;
    cout << "Line 4 Value of c is " << c << endl; // -61 (1100 0011)


}