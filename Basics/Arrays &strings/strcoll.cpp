
// strcoll() is a built-in library function and is declared in <string.h> header file. This function compares the string pointed to by str1 with the one pointed by str2.The strcoll() function performs the comparison based on the rules of the current locale’s LC_COLLATE category.
// 1. less than zero : When str1 is less than str2
// C program to illustrate strcoll() 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
  char str1[10]; 
  char str2[10]; 
  int ret; 

  strcpy(str1, "geeksforgeeks"); 
  strcpy(str2, "GEEKSFORGEEKS"); 

  ret = strcoll(str1, str2); 

  if (ret > 0) { 
    printf("str1 is greater than str2"); 
  } else if (ret < 0) { 
    printf("str1 is lesser than str2"); 
  } else { 
    printf("str1 is equal to str2"); 
  } 

  return (0); 
} 

// Output:
// str1 is greater than str2

// 2. greater than zero :when str1 is greater than str2
// C program to illustrate strcoll() 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
  char str1[10]; 
  char str2[10]; 
  int ret; 

  strcpy(str1, "GEEKSFORGEEKS"); 
  strcpy(str2, "geeksforgeeks"); 

  ret = strcoll(str1, str2); 

  if (ret > 0) { 
    printf("str1 is greater than str2"); 
  } else if (ret < 0) { 
    printf("str1 is lesser than str2"); 
  } else { 
    printf("str1 is equal to str2"); 
  } 

  return (0); 
} 

// Output:
// str1 is lesser than str2

// 3. Is equal to zero : when str1 is equal to str2
// C program to illustrate strcoll() 

#include <stdio.h> 
#include <string.h> 

int main() 
{ 
  char str1[10]; 
  char str2[10]; 
  int ret; 

  strcpy(str1, "GEEKSFORGEEKS"); 
  strcpy(str2, "GEEKSFORGEEKS"); 

  ret = strcoll(str1, str2); 

  if (ret > 0) { 
    printf("str1 is greater than str2"); 
  } else if (ret < 0) { 
    printf("str1 is lesser than str2"); 
  } else { 
    printf("str1 is equal to str2"); 
  } 

  return (0); 
} 

// Output:
// str1 is equal to str2
