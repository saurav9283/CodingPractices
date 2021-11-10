// W.A.P to print table upto given N

#include <iostream>
using namespace std;

void printTable (int m)
{
    for (int i= 1 ; i<=m ;  i++)
    {
        for (int j = 1; j < 11; j++)
        {
            
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }
    

}

int main()
{
    int  m;
    cout<< " Enter a number where upto print" << endl;
    cin>>m;

    printTable( m);

}
