#include<iostream>
#include<string>
using namespace std;

class mobile
{
    private:
    string name;
    int RAM;
    int processor;
    int battery;

    public:

    mobile (string x = "null", int y = 0,int z = 0, int b = 0)
    {
        name = x;
        RAM = y;
        processor = z;
        battery = b;
    }

    int getData();
    
};

int mobile :: getData()
    {
        cout << name << endl;
        cout << RAM << endl;
        cout << processor << endl;
        cout << battery << endl;
    }


int main()
{
    mobile m1;
    mobile m2("null",5,5,4000);
    m2.getData();
    m1.getData();

}
