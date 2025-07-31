#include <iostream>
#include <math.h>
using namespace std;
int quad(int x,int y)
{

     float z=(float)(log10(exp(x))+(log(sqrt(y))))/(sin(x)+exp(x)+pow(x,y));
     cout << "The result of te equation is " <<z<<endl;
return 0;
}
int main()
{
    int a,b;
    cout<<"Enter the values of x and y"<<endl;
    cin>>a>>b;
    quad(a,b);
    return 0;
}
