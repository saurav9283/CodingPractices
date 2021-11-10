/* W.A.P to check if a given array is a palindrom or not.
* note - palindrom array is one which is same from left or right.
* ex. arr = [1, 3, 5, 3, 1]
* output = true;

* ex arr = [1, 2 ,3, 4, 1]
* out put = false
*/

#include<iostream>
using namespace std;

int  backward(int arr[], int n)
{
    for(int i = n-1; i>=0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int forward(int arr[] , int n)
{
    for(int i = 0 ; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr[] = {1, 3, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    backward(arr,n);
    forward(arr,n);

}