

// CPP program to illustrate *char 
#include <iostream> 
using namespace std; 

int main() 
{ 
  // pointer str points to const string literal "Hello". 
  // No need to declare size. 
  char* str1 = "Hello"; 

  cout << str1 << endl; 

  int size = 30; 

  // can allocate size dynamically. 
  char* str2 = (char*)malloc(sizeof(char) * size); 

  str2 = "World"; 

  cout << str2; 

  return 0; 
} 

// Output:
/*
Hello 
World
*/

// CPP program to illustrate 
// std::string functions 
#include <iostream> 
using namespace std; 

int main() 
{ 
  // string assignment 
  string s1 = "Hello"; 
  string s2 = "World"; 

  // return length of string 
  cout << s1.size() << endl; // 5 
  cout << s2.length() << endl; // 5 

  // concatenate string using + operator. 
  s1 = s1 + s2; 
  cout << s1 << endl; // HelloWorld 

  // append string 
  s1.append("People"); 
  cout << s1 << endl; // HelloWorldPeople

  string s3 = "HelloWorldPeople"; 

  // compare two strings 
  if (s1.compare(s3) == 0) 
    cout << "true" << endl; 
  else
    cout << "false" << endl; 

  // substring of string s1 
  // substr(pos, length_of_substring) 
  string sub = s1.substr(0, 5); 
  cout << sub << endl; // Hello 

  // insert into string 
  // insert(pos, string) 
  s1.insert(10, "You"); 
  cout << s1 << endl; // HelloWorldYouPeople

  string target = "World"; 

  // find a target string in s1 
  size_t pos = s1.find(target); 
  if (pos != std::string::npos) // npos=-1 
    cout << "Found at Position:" << pos << endl; // pos=5 

  // replace a portion of string s1 
  // replace(pos, length_of_portion, string_to_replace) 
  cout << s1.replace(5, 5, "People") << endl; // HelloPeopleYouPeople

  return 0; 
} 

// Output:
/*
5
5
HelloWorld
HelloWorldPeople
true
Hello
HelloWorldYouPeople
Found at Position:5
HelloPeopleYouPeople
*/


// CPP program to illustrate char 
#include <iostream> 
using namespace std; 

int main() 
{ 

  char str[] = "Hello"; 
  // or char str1[]={'H', 'e', 'l', 'l', 'o', '\0'}; 

  // modify string to "Hollo" 
  str[1] = 'o'; 

  cout << str << endl; 

  return 0; 
}
