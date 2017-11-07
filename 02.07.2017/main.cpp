#include <iostream>

using namespace std;

class sample
{
    int x;
public:
    float operator ()(float f){return f>0? f:-f;}
};

int main()
{
    sample obj;
    float f=-4.67;
    cout<<obj(f);

    return 0;
}
