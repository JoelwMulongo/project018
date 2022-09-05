
//In C++, std::substr() is a predefined function used for string handling. string.h is the header file required for string functions.
// CPP program to illustrate substr() 
#include <string.h> 
#include <iostream> 
using namespace std; 

int main() 
{ 
  // Take any string 
  string s1 = "Hello"; 

  // Copy three characters of s1 (starting 
  // from position 1) 
  string r = s1.substr(1, 3); 

  // prints the result 
  cout << "String is: " << r; 

  return 0; 
} 

// Output:
// String is: llo

// Application
// CPP program to illustrate substr() 
#include <string.h> 
#include <iostream> 
using namespace std; 

int main() 
{ 
  // Take any string 
  string s = "dog:cat"; 

  // Find position of ':' using find() 
  int pos = s.find(":"); 

  // Copy substring after pos 
  string sub = s.substr(pos + 1); 

  // prints the result 
  cout << "String is: " << sub; 

  return 0; 
} 

// Output:
// String is: cat
