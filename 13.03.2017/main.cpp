#include <iostream>
#include <string>
#include <map> // map, multimap
using namespace std;
int main()
{
    map <char, string> m;
    m['C'] = "Cat";   // insert
    m['A'] = "Apple";
    m['B'] = "Boy";
    cout << m['A'] << " " // retrieve
         << m['B'] << " "
         << m['C'] << endl;

    map <char, string>::iterator it;
    it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " "
             << it->second << endl;
        it++;
    }
    return 0;
}
