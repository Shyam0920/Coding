#include<iostream>
using namespace std;
int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int swapalternate(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
        swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
  int arr[20],n;
  cout<<"enter hte size=";
  cin>>n;
  
  cout<<"enter the 5 number=";
  for(int i=0;i<n;i++)
  {

    cin>>arr[i];
  }
  //int car[4]={2,7,3,8}; 
  swapalternate(arr,n);
  printarray(arr,n);
  cout<<endl;
  //swapalternate(car,4);
  //printarray(car,4);/



} 