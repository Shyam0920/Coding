#include<iostream>
using namespace std;
int power(int x, int y)
{
int i;
int ans=1;
for(i=1;i<=y;i++)
{
    ans=ans*x;
}
 return ans;

}

int main()
{
    int a,b,c,d,e,f;
    cout<<"enter the number=";
    cin>>a;
    cout<<"enter the power=";
    cin>>b;
    int ans=power(a,b);
    cout<<"answer="<<ans<<endl;
    cout<<"enter the number=";
    cin>>c;
    cout<<"enter the power=";
    cin>>d;
    int an=power(c,d);
    cout<<"answer="<<an<<endl;
    cout<<"enter the number=";
    cin>>e;
    cout<<"enter the power=";
    cin>>f;
    int as=power(e,f);
    cout<<"answer="<<as<<endl;
}