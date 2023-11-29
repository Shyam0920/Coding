#include <iostream>
#include <climits>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    if((reversed_number>INT_MAX/10) || (reversed_number<INT_MIN/10))
    {
      return 0;
    }
    else
    {
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
    }
   
  }
cout << "Reversed Number = " << reversed_number;
  

  return 0;
}