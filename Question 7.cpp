#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter value"<<"\n";
  cin>>n;
  int s=1;
  while(n>0){
      int a=n%10;
      s=s*a;
      n=n/10;
  }
      
  
  cout<<"one time password is  : ";
  cout<<s;return s;
    
}
