/*

* W.A.P to count the occurances of each number of the array
* Ex. arr = [2 , 1, 7, 3, 5, 1 ,3, 2 , 1]
* Output =  1 -> 3
*           2 -> 2
*           3 -> 2
*           5 -> 1
*           7 -> 1
*/

#include<iostream>
using namespace std;

void occurances(int arr[] , int n)
{
    int* items = new int[n]; // array will declare through pointer
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        bool isExists = false;
        for (int k = 0; k < length; k++)
        {
            if (arr[i] == *(items + k))
            {
                isExists = true;
                break;
            }
        }
        if (isExists == false)
        {
            *(items + length) = arr[i];
            length++;
            int  count = 0;
            for (int j = 0; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }   
            }
            cout << arr[i] << "->" << count << endl;
        }
    }

}

int main()
{
    int arr[] = {2 , 1, 7, 3, 5, 1 ,3, 2 , 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    occurances(arr , n);

}
