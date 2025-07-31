#include <iostream>

using namespace std;
void swapn(int a,int b)
{

     a=a+b;         //a=5 b=2   a=7 b=a-b   b=5   a=a-b
     b=a-b;
     a=a-b;
     cout << "numbers after swapping "<<a<<" "<<b<< endl;

}
int main()
{
    int x,y;
    cout<<"Enter the two numbers"<<endl;
    cin>>x>>y;
    swapn(x,y);
    return 0;
}
