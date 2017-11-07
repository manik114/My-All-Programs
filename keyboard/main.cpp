#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w=0;
    char p;
    int r,clm;
    cin >> r >> clm;
    for(int i=0;i<(r*clm);i++)
    {
        cin >> p;
        if(p=='W' || p=='B' || p=='G')
            w++;
    }
    if(w==(r*clm))
    {
        cout << "#Black&White";
        return 0;
    }
    cout << "#Color";
    return 0;
}
