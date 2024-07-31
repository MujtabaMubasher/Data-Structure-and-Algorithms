#include <iostream>
using namespace std;

int power(int a, int b){
     int result = 1;
    // Base Case
    if(b==0)
      return 1;
    if(b==1)
     return a;

  int ans =  power(a, b>>1);

  if (b&1)
  {
     return a* ans * ans;
  }else{
    return ans * ans;
  }
  
}

int main(){
  int a, b;
  cout << "Enter the value of a: ";
  cin >> a;
  cout<< "Enter the value of b: ";
  cin >> b;
  
  cout << "a^b = " << power(a,b);

}