#include <iostream>

using namespace std;

int main()
{
      int a,b;
    cout << "ENTER TWO NUMBERS" << endl;
    cin>>a>>b;
    int add=a+b;
    cout<< "ADDITION OF "<<a<<" AND "<<b<<" = "<<add<<endl;
    int sub=a-b;
    cout<< "SUBTRACTION OF "<<a<<" AND "<<b<<" = "<<sub<<endl;
    int mul=a*b;
    cout<< "MULTIPLICATION OF "<<a<<" AND "<<b<<" = "<<mul<<endl;
    float div=(float)a/b;
    cout<< "DIVISION OF "<<a<<" AND "<<b<<" = "<<div<<endl;
    return 0;
}
