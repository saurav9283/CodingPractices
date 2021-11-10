#include<iostream>
using namespace std;

int GetMinimumItemOfArray(int arr[] , int n)
{
    int minimum;
    // for(int i=0 ; i<n ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    minimum = arr[0];
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    cout<<"minimum element is " <<minimum;
}

int main()
{
    int arr[] = {2,1,5,12,55,6,33};
    int n= sizeof(arr)/sizeof(arr[0]);
    GetMinimumItemOfArray(arr , n);
}