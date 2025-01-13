
#include <iostream>
using namespace std;

int main()
{
    int k;
    cout<<"value for k";
    cin>>k;
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
     s=s+arr[i]/k;
      
  }
  cout<<"one time password is  : ";
  cout<<s;return s;
    
}
