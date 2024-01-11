#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int n);

/*
 * 4 - Largest Palindrome Product
 */

int main()
{
  int i = 0, n[] = {999, 999}, f = n[0] * n[1];

  while(!isPalindrome(f))
  {
    n[0]--;
    i = i == 0 ? 1 : 0;
    f = n[0] * n[1];
  }

  cout << n[0] << " " << n[1] << " " << f << endl;
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
