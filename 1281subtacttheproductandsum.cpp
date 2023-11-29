#include<iostream>
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
  int PRODUCT=1,SUM=0,STORE,ANSWER,n;
  cout<<"ENTER THE NUMBER=";
  cin>>n;
  while(n!=0)
  {
    STORE=n%10;
    PRODUCT=STORE*PRODUCT;
    SUM=SUM+STORE;
    n=n/10;
  }
  ANSWER=PRODUCT-SUM;
  cout <<ANSWER;
}


