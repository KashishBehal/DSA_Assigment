#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  int b1 , h1 , b2 , h2;
  cout<<"eter the values";
  cin>>b1>>h1>>b2>>h2;
 int a1=(b1*h1)/2;
   int a2=(b2*h2)/2;
 int ans=max(a1 ,a2);
 cout<<ans;
 return 0;
 
}
