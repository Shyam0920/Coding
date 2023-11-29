#include<iostream>
using namespace std;
int factorial(int t)
{

   int factorial=1;
    for(int i=1;i<=t;i++)
    {
        factorial=factorial*i;

    }
    return factorial;
}
int ncr(int n,int r)
{

   int num=factorial(n);
   int dem=factorial(r)*factorial(n-r);
   int ans=num/dem;
   
   return ans; 

}

int main()
{
    int n,r,p,m;
    cout<<"enter the n =";
    cin>>n;
    cout<<"enter ht  r =";
    cin>>r;

    cout<<"answer="<<ncr(n,r)<<endl;

    cout<<"enter the n =";
    cin>>m;
    cout<<"enter ht  r =";
    cin>>p;

    cout<<"answer="<<ncr(m,p)<<endl;

    

}