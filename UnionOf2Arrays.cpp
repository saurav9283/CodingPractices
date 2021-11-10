/*
* W.A.P to print the union of two arrays.
* Ex. arr1 = [1, 3, 2 ,5, 6]
*     arr2 = [2, 5, 7, 9, 3]
*     output = [1, 2, 3, 5, 6, 7, 9]
*/


#include<iostream>
using namespace std;

class Union {
  public:
    int *unionArray;
    int arrLength; // current length of union array
    Union(int totalArrLength)
    {
      arrLength = 0;
      unionArray = new int[totalArrLength];
    }
};

// Return true if item exists, else false
bool isItemExists(Union &unionArrayObj, int item) {
  // Check if item already taken
  // bool isExists = false;
  for (int j = 0; j < unionArrayObj.arrLength; j++)
  {
    if (*(unionArrayObj.unionArray + j) == item)
    {
      return true;
      // isExists = true;
      // break;
    }
  }
  return false;
  // return isExists;
}

void addItemsInUnionArray(int arr[], int n, Union &unionArrayObj) {
  // add items from array
  for (int i = 0; i < n; i++)
  {
    int item = arr[i];
    // Check if item already taken
    bool isExists = isItemExists(unionArrayObj, item);
    if (isExists == false) {
      *(unionArrayObj.unionArray + unionArrayObj.arrLength) = item;
      unionArrayObj.arrLength++;
    }
  }
}

Union UnionOf2Array(int arr1[] , int arr2[] , int n1 , int n2)
{
  int i;
  Union unionOfTwoArrays(n1 + n2);
  // add items from first array
  addItemsInUnionArray(arr1, n1, unionOfTwoArrays);
  // add items from second array
  addItemsInUnionArray(arr2, n2, unionOfTwoArrays);
  // for (int i = 0; i < n2; i++)
  // {
  //   int item = arr2[i];
  //   // Check if item already taken
  //   bool flag = false;
  //   for (int j = 0; j < unionOfTwoArrays.arrLength; j++)
  //   {
  //     if (*(unionOfTwoArrays.unionArray + j) == item) {
  //       flag = true;
  //       break;
  //     }
  //   }
  //   if (flag == false) {
  //     *(unionOfTwoArrays.unionArray + unionOfTwoArrays.arrLength) = item;
  //     unionOfTwoArrays.arrLength++; 
  //   }
  // }
  return unionOfTwoArrays;
}

int main()
{
  int arr1[] = {1, 3, 2 ,5, 6 ,6};
  int arr2[] ={2, 5, 7, 9, 3};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  Union unionOf2Array = UnionOf2Array(arr1 , arr2 , n1 , n2);
  for (int i = 0; i < unionOf2Array.arrLength; i++)
  {
    cout << *(unionOf2Array.unionArray + i) << " ";
  }
  cout << endl;
  // cout << u << endl;
     
  

}

  
  