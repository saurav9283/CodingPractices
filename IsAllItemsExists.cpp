#include<iostream>
using namespace std;

bool isAllItemExists(int arr1[] , int arr2[] , int n1 , int n2)
{
    for(int i=0 ; i<n1 ; i++)
    {
        bool isMatched = false;
        for(int j=0 ; j<n2 ; j++)
        {
            if(arr1[i] == arr2[j])
            {
                isMatched = true;
                break;
            }
        }
        if (isMatched == false) {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr1[] = {1, 3, 2};
    int arr2[] = {2 , 10, 15, 5, 6, 3, 1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    if (isAllItemExists(arr1 , arr2, n1 , n2) == true)
    {
        cout << "All item exists" << endl;
    }
    else
    {
        cout << "All items doesn't exist" << endl;
    }
    
}