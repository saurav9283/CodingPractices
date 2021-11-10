// W.A.P to find all the prime number from 2 to N
// ex. N = 11
// output = 2, 3, 5, 7, 11

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
void primeAllPrimeTillN(int n)
{
    for(int i = 2; i <= n; i++)
    {
        if(isprime(i))
        {
            cout << i << " is prime " << endl;
        }
        else
        {
            cout << i << " number is not prime " << endl;

        }

    }

}

int main()
{
    int n;
    cout<<"Enter a number to check number is prime or not"<< endl;
    cin>> n;
    primeAllPrimeTillN(n);
    
}