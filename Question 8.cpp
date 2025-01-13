#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter number of values"<<"\n";
  cin>>n;
  int arr[n];
  cout<<"enter the values"<<"\n";
  for(int i=0;i<n;i++){
      
      cin>>arr[i];
  }
  int s=0;
  for(int i=0;i<n;i++){
      if(arr[i]>0){
          s++;
      }
      
  }
  cout<<"positive integers are : ";
  cout<<s;return s;
    
}
