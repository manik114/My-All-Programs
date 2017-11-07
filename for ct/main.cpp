#include <iostream>
#include <assert.h>
using namespace std;

class number
{
    int a;
    public:
    number (int x){a=x;}
    int get()const {return a;}
};

number add(const number &m,const number &n)
    {
        return number(n.get()+ m.get());
    }

int main()
{
   cout<<add(number(5),number(6)).get();

    return 0;
}
