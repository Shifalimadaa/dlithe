#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int coun(char *str)
{
 int i,count1=0;
    for(i=0;str[i]!='\0';i++)
    {
     if(isalnum(str[i]))i
          {
             continue;
          }
        else if(isspace(str[i]))
          {
                continue;
          }
            else
               {
                    count1++;
               }
    }
    return count1;
}

int main()
{
    int c;
    char s[20];
    cout << "Eneter the string " << endl;
    //cin>> s;
    getline(s);
cout<<s;
    c=coun(s);
    cout<<c;
    return 0;
}

