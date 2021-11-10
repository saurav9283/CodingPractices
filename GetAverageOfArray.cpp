#include<iostream>
using namespace std;

double GetAverageOfArray(int arr[] ,int n)
{
    int sum = 0;
    float average;
    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }
    average = (float)sum/n;
    return average;

}

int main()
{
    int arr[] = {1, 44 , 21 , 5 , 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    double avg = GetAverageOfArray(arr ,n);
    cout << avg << endl;
}