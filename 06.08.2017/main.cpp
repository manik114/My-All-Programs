#include <iostream>

using namespace std;

class sample
{
    string name;
    int age;
public:
    void set(string name){this->name=name;}
    void access()
    {
        if(name[0]=='M'||name[0]=='m')
        {
            cout<<"Enter your age "<<endl;
            cin>>age;
            show();
        }
        else
            cout<<"Sorry ! You have no access to this procedure"<<endl;
    }
    void show()
    {
        cout<<"Your age is "<<age<<endl;
    }
};

int main()
{
    string name;
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    sample obj;
    obj.set(name);
    obj.access();

    return 0;
}
