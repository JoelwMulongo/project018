
// In C/C++, a string is a 1-D array of characters and an array of string in C is a 2D array of characters. This comes quite handy in C++. There are 3 ways in which an Array of Strings in C or C++ can be created.

// 1. Using Pointers(Both C and C++): We actually create string literals by creating an array of pointers.
// C++ program to demonstrate array of strings using 
// 2D character array 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
  // Initialize array of pointer 
  const char *colour[4] = { "Blue", "Red", "Orange", "Yellow" }; 

  // Printing Strings stored in 2D array 
  for (int i = 0; i < 4; i++) 
    cout << colour[i] << "\n"; 

  return 0; 
} 

// Output:
/*
Blue
Red
Orange
Yellow
*/

/* 
Drawbacks:
 - Number of strings are fixed
 - Strings are constants and contents cannot be changed.
*/

// 2. Using 2D array(Both C and C++): This method is useful for shuffling, comparing and accessing characters randomly.
// C++ program to demonstrate array of strings using 
// 2D character array 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
  // Initialize 2D array 
  char colour[4][10] = { "Blue", "Red", "Orange", 
            "Yellow" }; 

  // Printing Strings stored in 2D array 
  for (int i = 0; i < 4; i++) 
    cout << colour[i] << "\n"; 

  return 0; 
} 

// Output:
/*
Blue
Red
Orange
Yellow
*/

/*
Drawbacks:
 - Both the number of Strings and Size of String are fixed.
 - A 2D array is allocated, whose second dimension is equal to maximum sized string which causes wastage of space.
*/

// 3. Using string Keyword (Only in C++): In this method, size of the string is not fixed, hence space is saved.
// C++ program to demonstrate array of strings using 
// array of strings. 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
  // Initialize String Array 
  string colour[4] = { "Blue", "Red", 
            "Orange", "Yellow" }; 

  // Print Strings 
  for (int i = 0; i < 4; i++) 
    cout << colour[i] << "\n"; 
} 

// Output:
/*
Blue
Red
Orange
Yellow
*/

// Drawback: The array is of fixed size.


// 4. Using Vectors(Only C++): STL Container Vector can be used to dynamically allocate array.
// C++ program to demonstrate vector of strings using 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
  // Declaring Vector of String type 
  vector<string> colour; 

  // Initialize vector with strings using push_back 
  // command 
  colour.push_back("Blue"); 
  colour.push_back("Red"); 
  colour.push_back("Orange"); 
  colour.push_back("Yellow"); 

  // Print Strings stored in Vector 
  for (int i = 0; i < colour.size(); i++) 
    cout << colour[i] << "\n"; 
} 

// Output:
/*
Blue
Red
Orange
Yellow
*/
