#include<iostream>
using namespace std;
int findunique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}
int main()
{
    int n;
    int arr[20];
    cout<<"enter the size=";
    cin>>n;
    cout<<"enter the array=";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findunique(arr,5);
    

}