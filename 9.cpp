#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 9 - Special Pythagorean Triplet
 */

int main()
{
   for(int a = 1; a < 1000; a++)
   {
      for(int b = a + 1; b < 1000; b++)
      {
         float c = sqrt(a * a + b * b);
         if(a + b + c == 1000)
         {
            cout << fixed <<  a * b * c << endl;
            break;
         } 
      }
   }

   return 0;
}
