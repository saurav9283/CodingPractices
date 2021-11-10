#include<iostream>
using namespace std;

int GetMaximumItemOfArray(int arr[] , int n)
{
    int maximum;
    // for(int i=0 ; i<n ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    maximum = arr[0];
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout<<"minimum element is " <<maximum;
}

int main()
{
    int arr[] = {2,1,5,12,55,6,33};
    int n= sizeof(arr)/sizeof(arr[0]);
    GetMaximumItemOfArray(arr , n);
}