#include <iostream>

using namespace std;

class number
{
    int a,b;
public:
     friend istream& operator >> (istream& input,number& A)
    {
        input >> A.a >> A.b;
    }
    friend ostream& operator << (ostream& output,number& A)
    {
        output<<A.a<<" "<<A.b<<endl;

    }
};

istream& operator >>(istream& input,number& A);
ostream& operator << (ostream& output,number& A);

int main()
{
    number A,B;
    cin>>A>>B;
    cout<<A<<B;
    return 0;
}
