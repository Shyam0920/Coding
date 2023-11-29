#include<iostream>
using namespace std;
bool iseven(int x)
{
   if (x&1){
    return 0;
   }
   return 1;
}
int main()
{

int a,b;
cout<<"enter the number=";
cin>>a;
if (iseven(a)){
    cout<<"number is even"<<endl;

}
else
{
cout<<"number is odd"<<endl;
}

cout<<"enter the number=";
cin>>b;
if (iseven(b)){
    cout<<"number is even"<<endl;

}
else
cout<<"number is odd"<<endl;


}