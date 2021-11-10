// W.A.P to print the factorial of a number. (less than 10)

#include<iostream>
using namespace std;

 void factoraialOfaNumber(int n)
 {
     int i, fact = 1;
     for (int i = 1; i <= n; i++)
     {
        fact *= i;
     }
     cout << fact << endl;
 }

int main()
{
    int n;
    cout << " Enter a positive number where upto finf factorial" << endl;
    cin >> n;
    factoraialOfaNumber(n);
}