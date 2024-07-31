#include <iostream>
using namespace std;

// Intersection Of Two Sorted Arrays in non-Decreasing way

void findArrayIntersection(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0, j = 0;
    bool isFound = false;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            isFound = true;
            i++, j++;
        }else
        {
            i++, j++;
        }
    }

    if(!isFound){
        cout << -1<<"\n";
    }
}

int main(){
   // Sample Input 1
   int arr1[] = {1, 2, 2, 2, 3, 4};
   int arr2[] = {2,2,3,3};
   // Sample Input 2
   int arr3[] = {2,3};
   int arr4[] = {1,2,3};
   // Sample Input 3
   int arr5[] = {1,4,5};
   int arr6[] = {3,4,5};
   // Sample Input 4
   int arr7[] = {1,1,5,6,3};
   int arr8[] = {7,8,9,11};

   int size1 = sizeof(arr1)/ sizeof(arr1[0]);
   int size2 = sizeof(arr2)/ sizeof(arr2[0]);
   findArrayIntersection(arr1,size1,arr2,size2);
}