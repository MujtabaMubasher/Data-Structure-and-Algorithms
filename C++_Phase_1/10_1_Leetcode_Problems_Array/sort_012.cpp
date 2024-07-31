#include <iostream>
using namespace std;

// void sort_012(int arr[], int n)
// {
//     int i = 0, j = n - 1;
//     while (i < j)
//     {
//         if (arr[i] == 0 && arr[j] == 0)
//         {
//             i++;
//         }
//         else if (arr[i] == 1 && arr[j] == 0)
//         {
//             swap(arr[i], arr[j]);
//             i++;
//         }
//         else if (arr[i] == 2 && arr[j] == 1)
//         {
//             swap(arr[i], arr[j]);
//             i++,j--;
//             // if (arr[i] == 0 && arr[j] == 0)
//             // {
//             //    swap(arr[1],arr[3]);    
//             // }
//         }
//          else if (arr[i] == 2 && arr[j] == 0)
//         {
//             swap(arr[i], arr[j]);
//             i++, j--;
//         }
//         else if (arr[i] == 1 && arr[j] == 1)
//         {
//             swap(arr[i], arr[j]);
//             i++;
//         }
//         else if (arr[i] == 0 && arr[j] == 2)
//         {
//             i++, j--;
//         }
//     }
// }

void sort_012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[6] = {0,1,2,2,1,0};
    int arr2[7] = {0,1,2,1,2,1,2};
    int arr3[7] = {2,2,2,1,1,1,0};
    int arr4[6] = {2,1,2,0,1,0};

    sort_012(arr4, 6);
    printArray(arr4,6);
}

//https://www.naukri.com/code360/problems/sort-0-1-2_631055