#include <iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int st(string s)
{
for(int i=0;i<s.length();i++)
{
    if (isupper(s[i]))
    {
        tolower(s[i]);
    }
}
  cout<<s;
  return 0;
}

int main()
{
    string str;
    cout << "Enetre the string" << endl;
    getline(cin,str);
   st(str);
    return 0;
}
abc 32goats
