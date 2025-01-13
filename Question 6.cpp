
#include <iostream>
#include<cmath>
using namespace std;
int Cal(int n) {
    int c=0;
   while(n>0){
       if(n%2==0){
           n=n/2;
       }
       else{
           n=n-1;
       }c++;
   }return c;
}
int main()
{
  int n;
  cout<<"enter number";
  cin>>n;
 int a=Cal(n);
 cout<<a;
 return 0;
 
}
