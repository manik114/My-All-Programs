#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    char s[101];
    int i;

    cin >> s;
    int d = strlen(s);

    for(i=0;i<=d;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]== '9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
