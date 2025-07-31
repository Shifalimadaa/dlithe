#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int a,b,c,r1,r2;
    cout << "Enter a,b and c of the form ax^2+bx+c" << endl;
    cin>>a>>b>>c;
    r1=(float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        r2=(float)(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        cout << "The roots of the equation are " <<r1<< " and " <<r2 << endl;

    return 0;
}
