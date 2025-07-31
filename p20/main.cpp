#include <iostream>
#include <math.h>
using namespace std;
int sq(int a,int b,int c)
{
     int r1=(float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
     int r2=(float)(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
     cout << "The roots of the equation are " <<r1<< " and " <<r2<< endl;
return 0;
}
int main()
{
    int x,y,z;
    cout<<"Enter the tree numbers of a quadratic equation"<<endl;
    cin>>x>>y>>z;
    sq(x,y,z);
    return 0;
}
