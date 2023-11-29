#include<iostream>
using namespace std;
int main()

 {
  int n,rem,count=0;
cout<<"enter the number=";
cin>>n;
while(n!=0)
{
    if (n&1)
    {
        count++;
    }
   n= n>>1;





}
cout<<count;
}