#include<iostream>
#include <vector>
using namespace std;

// Reverse The Whole Array with Vector

vector<int> reverse_Vector(vector<int> v){
   int i = 0, j = v.size() - 1;
   while (i<=j)
   {
      swap(v[j], v[i]);
      i++;
      j--;
   }
   return v;
}
void print(vector<int> v ,string com)
{
    cout << "\n***"<<com<<"***\n";
    for (int i = 0; i < v.size(); i++)
    {
       cout<< v[i]<<" ";
    }
    
}
int main(){
   //int arr[] = {1,2,3,4,5,6};
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   v.push_back(6);
   print(v,"Original Vector");
   vector<int> ans = reverse_Vector(v);
   print(ans,"Reverse Vector");
}