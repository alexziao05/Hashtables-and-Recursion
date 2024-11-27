#include <iostream>
#include <string>
using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(string str, int start, int end) {
  // TODO: Implement the base case
  if (start >= end) {    // If start is >= end, every character is checked. 
    return true; 
  }  

  if (str[start] != str[end]) {  // Goes through every char in matching positions. If not the same, false. 
    return false; 
  }

  // TODO: Implement the recursive case
  return isPalindrome(str, start + 1, end - 1); 
}

string removeNonAlphaCharacters (string str) {
    string final_string; 
    for (char c : str) {   //loop through entire string, if it is a char, convert it to lower case and add to final_string 
      if (isalpha(c)) {    // C++ Built in "isalpha" function
        final_string += tolower(c); 
      } 
    }

    return final_string; 
  }

int main() {
  string input;

  // Input from the user
  cout << "Enter a string: ";
  getline(cin, input);

  // Write a function to ignore all the nonalphabetic characters in the string.
  input = removeNonAlphaCharacters(input);

  // Call the recursive function and display the result
  if (isPalindrome(input, 0, input.length() - 1)) {
    cout << "The string is a palindrome." << endl;
  } else {
    cout << "The string is not a palindrome." << endl;
  }

  return 0;
}

