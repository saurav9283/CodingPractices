// W.A.P to reverse the array
// arr = [1, 2, 3, 4, 5]
// output = [5, 4, 3, 2, 1]

#include<iostream>
using namespace std;


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // after reverse arr should be .. 2arr[] = {5, 4, 3, 2, 1};

    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    printArray(arr, n);
}