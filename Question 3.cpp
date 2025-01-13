
#include <iostream>
#include<cmath>
using namespace std;
bool isPerfect(int n ){
   int b=cbrt(n);
   return b* b* b==n;
       
}
int main()
{
  int n;
  cout<<"enter number of values";
  cin>>n;cout<<"enter values";
  int a;
  int c=0;
  for(int i=0;i<n;i++){
      cin>>a;
      if(isPerfect(a)){
          c++;
      }
  }
    cout<<c;
    return 0;
}
