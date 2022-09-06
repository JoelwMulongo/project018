// different methods to reverse a string in C/C++

// Write own reverse function by swapping characters: One simple solution is to write our own reverse function to reverse a string in C++.
// 1. A Simple C++ program to reverse a string 
#include <bits/stdc++.h> 
using namespace std; 

// Function to reverse a string 
void reverseStr(string& str) 
{ 
  int n = str.length(); 

  // Swap character starting from two 
  // corners 
  for (int i = 0; i < n / 2; i++) 
    swap(str[i], str[n - i - 1]); 
} 

// Driver program 
int main() 
{ 
  string str = "helloworld"; 
  reverseStr(str); 
  cout << str; 
  return 0; 
} 

// Output
// dlrowolleh

// 2. Using inbuilt “reverse” function: There is a direct function in “algorithm” header file for doing reverse that saves our time when programming.
// A quickly written program for reversing a string 
// using reverse() 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
  string str = "helloworld"; 

  // Reverse str[begin..end] 
  reverse(str.begin(), str.end()); 

  cout << str; 
  return 0; 
} 

// Output
// dlrowolleh

// 3. Only printing reverse:
// C++ program to print reverse of a string 
#include <bits/stdc++.h> 
using namespace std; 

// Function to reverse a string 
void reverse(string str) 
{ 
for (int i=str.length()-1; i>=0; i--) 
  cout << str[i]; 
} 

// Driver code 
int main(void) 
{ 
  string s = "helloworld"; 
  reverse(s); 
  return (0); 
} 

// Output
// dlrowolleh
