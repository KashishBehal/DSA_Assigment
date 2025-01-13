
#include <iostream>
#include<cmath>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;  

    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;  
    }
    return true;
}
int main()
{
  int n;
  cout<<"enter number";
  cin>>n;
  int c=0;
  while(n>0){
      int a=n%10;
      if(!isPrime(a)){
          c=c+a;
      }
      n=n/10;
  }cout<< c;
 
}
