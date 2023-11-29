#include<iostream>
using namespace std;
int main()
{ 
        int n,k,m=0;
    cout<<"enter the choice 1 =";

    cin>>k;
    cout<<"enter the number=";
    cin>>n;


    switch(k)
    {
        case 1:
              m=n/100;
              n=n%10;
              
              cout<<"hundred rupeess note="<<m<<endl;
              
        case 2:
              m=n/50;
              cout<<"fifty rupee note="<<m<<endl;

        case 3:
              m=n/10;
              cout<<"ten rupee note="<<m<<endl;


    

      
        
    }
    
    

}

