#include <iostream>
using namespace std;
int main() 
{
  int n,pr=1,arr[39];
  cin>>n;
  //Enter the elements of the array
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
/*Cycle in which the product of numbers multiple of 7 is located*/
  for(int j=0;j<n;j++)
    //Check that the number is a multiple of 7
    if(arr[j]%7==0)
	pr*=arr[j];
  if(pr==1)
   cout<<"No"<<endl;
  else cout<<pr<<endl;
  return 0;
}
