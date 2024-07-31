#include <iostream>
using namespace std;

void push(int element)
{   int i = 0;
    int arr[1];
    arr[i] = element;
    i++;
    int size = i;
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    
}
void allDublicates(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                push(arr[i]);
            }
        }
    }
}
int main(){
 int arr[16] = {4,3,2,7,8,2,3,1,8,7,1,10,19,1,19,10};
 allDublicates(arr,16);
}

// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/