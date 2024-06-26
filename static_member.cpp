#include<iostream>
using namespace std;

class spruha
{
    public :
    int a,b;

    spruha()
    {
        a = 5;
        b = 8;
        s++;
        
    }

    static int s;

    static int getStat() // static member function
    {
        s++;
        return s;
    }
};

int spruha :: s = 0;

int main()

{
    spruha s1;
    cout << s1.s<< endl;
    spruha s2;
    cout << s2.s<<endl;
    cout << spruha::s<<endl;
    cout << s1.a << endl;
    cout << s1.b<< endl;
    cout << s2.a<<endl;
    cout << spruha::getStat()<< endl;
    cout << s1.getStat();
}