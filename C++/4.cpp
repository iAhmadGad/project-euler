#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int n);

/*
 * 4 - Largest Palindrome Product
 */

int main()
{
  int l = -1;

  for(int i = 999; i >= 100; i--)
  {
    if(l >= i * 999)
      break;
    for(int j = 999; j >= 100; j--)
    {
      int p = i * j;
      l = l < p && isPalindrome(p) ? p : l;
    }  
  }
  
  cout << l << endl;
  return 0;
}

bool isPalindrome(int n)
{
  string s = to_string(n);
  for(int i = 0, len = s.length(); i < len / 2; i++)
  {
    if(s[i] != s[len - 1 - i]) return false;
  }

  return true;
}
