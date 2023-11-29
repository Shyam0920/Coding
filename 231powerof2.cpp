#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to check if x is power of 2
bool isPowerOfTwo(int n)
{
int ans = 1;
        
        for(int i = 0; i <= 30; i++) {
            
            //cout<<" ans "<<ans <<endl;
            if(ans == n)
            {
                return true;
            }
            if(ans < INT_MAX/2)
            ans = ans * 2;   
            
        }
        return false;
    }


// Driver program
int main()
{
	isPowerOfTwo(2) ? cout << "Yes" << endl : cout << "No" << endl;
	isPowerOfTwo(64) ? cout << "Yes" << endl : cout << "No" << endl;

	return 0;
}