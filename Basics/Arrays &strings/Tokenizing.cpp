

// 1. Tokenizing a string using stringstream 
#include <bits/stdc++.h> 

using namespace std; 

int main() 
{ 
  
  string line = "Hello world"; 
  
  // Vector of string to save tokens 
  vector <string> tokens; 
  
  // stringstream class check1 
  stringstream check1(line); 
  
  string intermediate; 
  
  // Tokenizing w.r.t. space ' ' 
  while(getline(check1, intermediate, ' ')) 
  { 
    tokens.push_back(intermediate); 
  } 
  
  // Printing the token vector 
  for(int i = 0; i < tokens.size(); i++) 
    cout << tokens[i] << '\n'; 
} 

// Output
/*
Hello
world
*/

// 2. using strtok() 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
  char str[] = "Hello-world"; 

  // Returns first token 
  char *token = strtok(str, "-"); 

  // Keep printing tokens while one of the 
  // delimiters present in str[]. 
  while (token != NULL) 
  { 
    printf("%s\n", token); 
    token = strtok(NULL, "-"); 
  } 

  return 0; 
} 
// Output
/*
Hello
world
*/

// 3. C/C++ program to demonstrate working of strtok_r() 
// by splitting string based on space character. 
#include<stdio.h> 
#include<string.h> 

int main() 
{ 
  char str[] = "Hello world"; 
  char *token; 
  char *rest = str; 

  while ((token = strtok_r(rest, " ", &rest))) 
    printf("%s\n", token); 

  return(0); 
} 

/*
Hello
world
*/
