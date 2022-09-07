
// The scalbn() function is defined in the cmath header file. This function is used to calculate the product of given number x and FLT_RADIX raised to the power n.
// C++ program to demonstrate 
// example of scalbn() function. 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
  int n = 7; 
  int x = 5; 
  int ans; 

  ans = scalbn(x, n); 
  cout << x << " * "
    << FLT_RADIX << "^"
    << n << " = "
    << ans << endl; 

  return 0; 
} 

// Output:
// 5 * 2^7 = 640
