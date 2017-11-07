#include <iostream>

using namespace std;

class s
{
public:
    int x;
};

class a: s
{
void use()
    {
        cout<<x<<endl;
    }
};

class b: a
{
    void use()
    {
        cout<<x<<endl;
    }
};

int main()
{
    a a1;
    //cout<<a1.x;
    cout << "Hello world!" << endl;
    return 0;
}
