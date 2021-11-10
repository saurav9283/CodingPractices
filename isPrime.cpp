/*
* W.A.P to check if the given number is a prime or not.
* ex.  5
* putput true

* ex. 8
* output false
*/

#include<iostream>
using namespace std;

// Retuns true if prime, o/w false
bool isprime(int n)
{
    int i, flag = 0;
    // Run a loop from 2 to n - 1 to check if it divids n
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter a number to check number is prime or not"<< endl;
    cin>> n;
    bool isPrimeNumber = isprime(n);
    if (isPrimeNumber == true)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }
}