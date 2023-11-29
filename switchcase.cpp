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
              m=n/500;
              
              
              cout<<"hundred rupeess note="<<m<<endl;
              n=n-m*500;
              
        case 2:
              m=n/100;
              
              
              cout<<"hundred rupeess note="<<m<<endl;
              n=n-m*100;
              
        case 3:
              m=n/50;
            
              cout<<"fifty rupee note="<<m<<endl;
               n=n-m*50;

        case 4:
              m=n/20;
              cout<<"Twenty rupee note ="<<m<<endl;
              n=n-m*20;

        case 5:
              m=n/10;
            
              cout<<"ten rupee note="<<m<<endl;

              n=n-m*10;

        case 6:
            cout<<"coins = "<<n;  


    

      
        
    }
    
    

}

