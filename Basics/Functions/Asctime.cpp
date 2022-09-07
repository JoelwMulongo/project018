
// The asctime() function is defined in the ctime header file. The asctime() function converts the given calendar time of structure tm to a character representation i.e human readable form.
// c++ program to demonstrate 
// example of asctime() function. 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
  time_t time_ptr; 

  time(&time_ptr); 
  cout << "Current date and time = "
    << asctime(localtime(&time_ptr)); 

  return 0; 
} 

// Output:
// Current date and time = Mon Oct  1 10:21:26 2018
