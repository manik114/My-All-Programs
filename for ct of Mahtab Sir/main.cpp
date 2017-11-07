#include <iostream>

using namespace std;

class num
{
    int a;
   public:
      num(int b){a=b;}
      int get() const {return a;}
};
void print(const num& a)
      {
          cout<<a.get();
      }
int main()
{
    num(5);
    print(num( ));

    return 0;
}
