/*
* W.A.P to get the intersaction of items from two arrays.
* ex. arr1 = [1,2, 3, 4]
*     arr2 = [4, 2, 5, 7, 8]
*   output = [2]
*/

#include<iostream>
using namespace std;

int* checkarray1in2(int arr1[] , int arr2[] , int n1 , int n2)
{
    int *result = new int[10];
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
    return result;
}

int main()
{
    int arr1[] = {1 , 3, 2, 200};
    int arr2[] = {2 , 10, 15, 5, 6, 3, 1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int *result = checkarray1in2(arr1 , arr2, n1 , n2);
    // int n = sizeof(result) / sizeof(result[0]);
    // for (int i = 0; i < 3; i++) {
    //     cout << *(result + i) << endl;
    // }
}
