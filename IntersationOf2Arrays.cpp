#include<iostream>
using namespace std;

bool checkarray1in2(int arr1[] , int arr2[] , int n1 , int n2)
{
    for(int i=0 ; i<n1 ; i++)
    {
        for(int j=0 ; j<n2 ; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << endl;
                break;
            }
        }
    }
    return true;
}

int main()
{
    int arr1[] = {100 , 3, 2, 200};
    int arr2[] = {2 , 10, 15, 5, 6, 3, 1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    checkarray1in2(arr1 , arr2, n1 , n2);
    
}