#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int x=5;
   int*p=&x;
   *p++=10;
   cout<<x;

    return 0;
}
