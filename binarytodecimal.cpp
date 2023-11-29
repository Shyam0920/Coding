#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   /*int a=3,b=4,c=4,d=4;
   cout<<"a&b="<<(a&b)<<endl;
   cout <<"a|b="<<(a|b)<<endl;
   cout<<"~a="<<(~a)<<endl;
   cout<<"a^b="<<(a^b)<< endl;

   cout<<(12>>1)<<endl;
   cout<<(12>>2)<<endl;
  cout<<(12<<1)<<endl;
  cout<<(12<<2)<<endl;
  cout<<(a+ (++b))<<endl;
  cout<<(a+ (--c))<<endl;
  cout<<(a+ (d--))<<endl;
  cout<<(d);*/
  
  int n;
  cout<<"enter the number=";
  cin>>n;
  int ans=0;
  int i=0;
  while(n!=0)
  {
   int bit= n%10;
   
    ans= ans +pow(2,i)*bit ;

    n=n/10;
    i++;

}
  cout<<ans;

}